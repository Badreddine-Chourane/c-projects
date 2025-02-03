#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Pour simplifier
typedef string Forme;
typedef string Couleur;

class Brique
{
private:
    Forme forme;
    Couleur couleur;

public:
    // Constructor
    Brique(Forme forme = " ", Couleur couleur = "") : forme(forme), couleur(couleur) {}

    void afficher() const {
        if (forme != " ") {
            cout << "(" << forme << ", " << couleur << ")";
        }
    }

    Forme getForme() const { return forme; }
    Couleur getCouleur() const { return couleur; }

    // Define the '%' operator for Brique
    Brique operator%(const Brique& other) const {
        // Example: Returning a white full brick, can be customized as needed
        return Brique("pleine", "blanc");
    }

    // Define the '*' operator for Brique
    Brique operator*(const Brique& other) const {
        // Example: Returning an oblique brick, can be customized as needed
        return Brique("obliqueG", "rouge");
    }
};

class Construction
{
    vector<vector<vector<Brique>>> contenu;

public:
    // Default constructor for Construction
    Construction() {}

    // Constructor to create a construction with specific height, width, and depth
    Construction(unsigned int hauteur, unsigned int largeur, unsigned int profondeur)
    {
        contenu.resize(hauteur, vector<vector<Brique>>(largeur, vector<Brique>(profondeur, Brique(" ", ""))));
    }

    // Operator for displaying the construction (Overloading the ostream operator)
    friend ostream& operator<<(ostream& os, const Construction& c)
    {
        for (int i = c.contenu.size() - 1; i >= 0; --i)
        {
            os << "Couche " << i << " :\n";
            for (const auto& ligne : c.contenu[i])
            {
                for (const auto& brique : ligne)
                {
                    brique.afficher();
                    os << " ";
                }
                os << "\n";
            }
        }
        return os;
    }

    // Adding a construction to the current one (operator^)
    Construction& operator^=(const Construction& other)
    {
        if (contenu.size() < other.contenu.size())
        {
            contenu.resize(other.contenu.size());
        }
        for (size_t i = 0; i < other.contenu.size(); ++i)
        {
            for (size_t j = 0; j < other.contenu[i].size(); ++j)
            {
                for (size_t k = 0; k < other.contenu[i][j].size(); ++k)
                {
                    if (contenu[i][j][k].getForme() == " ")
                    {
                        contenu[i][j][k] = other.contenu[i][j][k];
                    }
                }
            }
        }
        return *this;
    }

    // Adding bricks to a specific layer (operator+)
    Construction& operator+=(const Brique& brique)
    {
        for (auto& layer : contenu)
        {
            for (auto& row : layer)
            {
                for (auto& brick : row)
                {
                    if (brick.getForme() == " ")
                    {
                        brick = brique;
                    }
                }
            }
        }
        return *this;
    }

    // Fill a layer with bricks (operator%)
    const Construction operator%(unsigned int n)
    {
        Construction temp = *this;
        for (unsigned int i = 0; i < n; ++i)
        {
            temp += Brique("pleine", "blanc");
        }
        return temp;
    }

    // Define multiplication operator (*)
    const Construction operator*(unsigned int n)
    {
        Construction temp = *this;
        for (unsigned int i = 0; i < n; ++i)
        {
            temp += Brique("pleine", "rouge");
        }
        return temp;
    }

    // Define division operator (/)
    const Construction operator/(unsigned int n)
    {
        Construction temp = *this;
        for (unsigned int i = 0; i < n; ++i)
        {
            temp += Brique("obliqueG", "rouge");
        }
        return temp;
    }
};

// Helper function to build and return a brick of a specific type
Brique operator+(const Brique& b1, const Brique& b2)
{
    return Brique("pleine", "rouge");
}

int main()
{
    // Modèles de briques
    Brique toitD("obliqueD", "rouge");
    Brique toitG("obliqueG", "rouge");
    Brique toitM(" pleine ", "rouge");
    Brique mur(" pleine ", "blanc");
    Brique vide(" ", "");

    unsigned int largeur(4);
    unsigned int profondeur(3);
    unsigned int hauteur(3); // sans le toit

    // on construit les murs
    Construction maison(hauteur, largeur, profondeur);

    // on construit le toit
    Construction toit(profondeur % (toitG + 2 * toitM + toitD));
    toit ^= profondeur % (vide + toitG + toitD);

    // on pose le toit sur les murs
    maison ^= toit;

    // on admire notre construction
    cout << maison << endl;

    return 0;
}
