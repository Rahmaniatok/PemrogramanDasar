#include <iostream>

using namespace std;

    int main () {
        int x, y, i;
            cout << "Masukkan x:";
            cin >> x;
            cout << "Masukkan y:";
            cin >> y;
        i = 1;
        if (x > y) {
            swap (y,x);
        }
        do{
            x = x * i;
            if (x > y) {
                swap (y,x);
            }
            i = i+1;
        }while (x = y);
        cout << x;
    return 0;
}


#include <iostream>

using namespace std;

    int main () {
        int x, y, i, j, a, b;
        cout << "Masukkan x:";
        cin>> x;
        
        cout << "Masukkan y:";
        cin>> y;
        i = 1;
        j = 1;
        
        do {
            a = x*i;
            b = y*j;
            if (a<b) {
                i = i + 1;
            }
            if (a>b) {
                j = j + 1;
            }
        }while (a != b);
        cout << a;
    return 0;
}

#include <iostream>

using namespace std;

    int main () {
        int x, y, i, a;
        cout << "Masukkan x:";
        cin>> x;
        
        cout << "Masukkan y:";
        cin>> y;
        i = 1;
        do {
            a = x*i;
        }while (a != b);
        cout << a;
    return 0;
}

#include <iostream>

using namespace std;

    int main () {
        int x, y, i, a, b;
        cout << "Masukkan x:";
        cin>> x;
        
        cout << "Masukkan y:";
        cin>> y;
        i = 1;
        do {
            a = x*i;
            b = y;
            if (a>b) {
                swap (x,y);
            }
        }while (a != b);
        cout << a;
    return 0;
}