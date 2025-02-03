// Td6polymorphisme.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include "LivreScolaire.h"
#include "LIV_ENF.h"
int main()
{
    std::vector<Livre*> L;
    L.push_back(new LIV_ENF(1, "le petit prince", 100, 50, 3, 6));
    L.push_back(new LivreScolaire(2, "Math pour CE1", 100, 30, "math", "CE1"));
    for (Livre* l : L)
    {
        cout << *l;
        cout << l->prixttc() << endl;
        cout << montanttotal(*l, 20) << endl;
    }
    for (Livre* l : L)
    {
        delete l;
    }

}

