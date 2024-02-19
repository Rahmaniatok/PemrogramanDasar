#include <iostream>
using namespace std;

int main (){
 int a, b, c, D, x1, x2;
  cout << "Masukkan koefisien x^2 :";
  cin >> a;

  cout << "Masukkan koefisien x :";
  cin >> b;

  cout << "Masukkan konstanta :";
  cin >> c;

  D = b*b - (4*a*c)

  If (D>0) {
    x1 = (-b + sqrt(D)) / 2*a;
    x2 = (-b - sqrt(D)) / 2*a;

    cout<< "Akar persamaan kuadrat tersebut adalah" << x1 << " dan " << x2;
  } else if (D == 0) {
    x1 = x2 = -b/2*a;
    cout << "Akar persamaan kuadrat tersebut adalah" << x1;
  } else (D<i) {
    x1 = (-b/2*a) + (sqrt|-D| / 2a) i
    x2 = (-b/2*a) - (sqrt|-D| / 2a) i
  }
  return 0;
}
