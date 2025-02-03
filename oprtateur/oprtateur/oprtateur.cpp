#include "vecteur3D.h"
#include <iostream>

int main()
{
    vecteur3D  v1(1.2, 2.6, 3.4) ,v2(9.4,6.4,3.5);
    (v1 + v2).afficher();
    if (v1 == v2) {
        cout << "true";
    }
    else {
        cout << "false";
    };
    cout << (v1 * v2);

   
}
