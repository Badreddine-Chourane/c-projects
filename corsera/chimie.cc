#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Flacon
{
private:
  string nom;
  double volume;
  double pH;

public:
  /*****************************************************
    Compléter le code à partir d'ici
  *******************************************************/

    Flacon(const string& nom, double volume, double pH)
        : nom(nom), volume(volume), pH(pH) {}

   
    ostream& etiquette(ostream& sortie) const {
        sortie << nom << " : " << volume << " ml, pH " << pH;
        return sortie;
    }

    friend ostream& operator<<(ostream& sortie, const Flacon& flacon) {
        return flacon.etiquette(sortie);
    }

    friend Flacon operator+(const Flacon& f1, const Flacon& f2) {
        string nouveauNom = f1.nom + " + " + f2.nom;
        double nouveauVolume = f1.volume + f2.volume;
        double nouveauPH = -log10((f1.volume * pow(10.0, -f1.pH) + f2.volume * pow(10.0, -f2.pH)) / nouveauVolume);
        return Flacon(nouveauNom, nouveauVolume, nouveauPH);
    }

    Flacon& operator+=(const Flacon& autre) {
        nom += " + " + autre.nom;
        volume += autre.volume;
        pH = -log10((volume * pow(10.0, -pH) + autre.volume * pow(10.0, -autre.pH)) / volume);
        return *this;
    }
};



/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

void afficher_melange(Flacon const& f1, Flacon const& f2)
{
  cout << "Si je mélange " << endl;
  cout << "\t\"" << f1 << "\"" << endl;
  cout << "avec" << endl;
  cout << "\t\"" << f2 << "\"" << endl;
  cout << "j'obtiens :" << endl;
  cout << "\t\"" << (f1 + f2) << "\"" << endl;
}

int main()
{
  Flacon flacon1("Eau", 600.0, 7.0);
  Flacon flacon2("Acide chlorhydrique", 500.0, 2.0);
  Flacon flacon3("Acide perchlorique",  800.0, 1.5);

  afficher_melange(flacon1, flacon2);
  afficher_melange(flacon2, flacon3);

  return 0;

}
