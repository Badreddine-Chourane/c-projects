
#include "duree.h"

int main()
{   
    int h = 0; int m = 0; int s = 0;
    duree chrono(h,m,s);
    duree chrono(h);


    chrono.afficher();
    
}
