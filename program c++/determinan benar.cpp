#include <iostream>
#include <math.h>
using namespace std;

int main (){
 int a, b, c;
 float D, x1, x2, p, q;
  cout << "Masukkan koefisien x^2 :";
  cin >> a;

  cout << "Masukkan koefisien x :";
  cin >> b;

  cout << "Masukkan konstanta :";
  cin >> c;

  D = b*b - (4*a*c);
  cout << "Determinan dari persamaan kuadrat tersebut adalah " << D<< "."<< endl;
  if (D>0) {
    p = sqrt(D);
    x1 = (-b + p) / 2*a;
    x2 = (-b - p) / 2*a;

    cout<< "Akar persamaan kuadrat tersebut adalah " << x1 << " dan " << x2 << " yang bersifat riil dan berbeda.";
  } else if (D == 0) {
        x1 = x2 = -b/2*a;
        cout << "Akar persamaan kuadrat tersebut adalah " << x1<< " yang bersifat riil dan sama.";
  } else {
        q = abs(-D);
        p = sqrt(q);
        x1 = (-b/2*a) + (p/2*a);
        x2 = (-b/2*a) - (p/2*a);
        cout<< "Akar persamaan kuadrat tersebut adalah " << x1 << " i dan " << x2 << " i yang bersifat imaginer";
  }
  return 0;
}
