#include "form.h"

#include <iostream>
using namespace std;

int main()
{
   form *f[2];
   f[0] = new cercle(5);
   f[1] = new rectangle(15.2, 19.3);
   
   for (int i = 0; i < 2;i++) {

    cout << f[i]->aire() << endl;
   }
  
   
    
}
