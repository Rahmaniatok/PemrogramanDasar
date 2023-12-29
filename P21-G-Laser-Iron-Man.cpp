#include<iostream>
#include<cmath>
using namespace std;

struct tembok{
    float x1, y1, x2, y2;
    float m, c;
};

struct ultron{
    float x, y;
    float jarak;
    bool tidakKena;
};

float jarak(float x1, float y1, float x2, float y2){
    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

int main() {
    float koorIronMan[2];
    cin >> koorIronMan[0] >> koorIronMan[1];
    int N;
    cin >> N;
    ultron ultronKu[N];
    for(int i=0; i<N; i++){
        cin >> ultronKu[i].x >> ultronKu[i].y;
        ultronKu[i].tidakKena = true;
        ultronKu[i].jarak = jarak(koorIronMan[0], koorIronMan[1], ultronKu[i].x, ultronKu[i].y);
    }
    int K;
    cin >> K;
    tembok tembokKu[K];
    for(int i=0; i<K; i++){
        float tempx, tempy;
        cin >> tembokKu[i].x1 >> tembokKu[i].y1 >> tembokKu[i].x2 >> tembokKu[i].y2;
        if(tembokKu[i].x1 > tembokKu[i].x2){
            tempx = tembokKu[i].x1;
            tembokKu[i].x1 = tembokKu[i].x2;
            tembokKu[i].x2 = tempx;
            tempy = tembokKu[i].y1;
            tembokKu[i].y1 = tembokKu[i].y2;
            tembokKu[i].y2 = tempy;
        }
        tembokKu[i].m = (tembokKu[i].y2 - tembokKu[i].y1)/(tembokKu[i].x2-tembokKu[i].x1);
        tembokKu[i].c = (-tembokKu[i].x1*tembokKu[i].m) + tembokKu[i].y1;
    }
    for(int i=0; i<N; i++){
        if(koorIronMan[0]==ultronKu[i].x){
            int j;
            for(j=0; j<K; j++){
                if((tembokKu[j].x1==tembokKu[j].x2)&&(tembokKu[j].x1!=koorIronMan[0])){
                    cout << ultronKu[i].x << " " << ultronKu[i].y << " tembus tembok " << tembokKu[j].x1 << " " << tembokKu[j].y1 << " "<< tembokKu[j].x2 << " " << tembokKu[j].y2 << endl;
                    ultronKu[i].tidakKena = true;
                    continue;
                } else{
                    float x = koorIronMan[0];
                    float y = tembokKu[j].m*x + tembokKu[j].c;
                    // cout << m1 <<" "<< c1 << " " << tembokKu[i].m << " " << tembokKu[i].c << endl;
                    cout << x << " " << y << endl;
                    float tempx, tempy;
                    if(tembokKu[i].y1 > tembokKu[i].y2){
                        tempx = tembokKu[i].x1;
                        tembokKu[i].x1 = tembokKu[i].x2;
                        tembokKu[i].x2 = tempx;
                        tempy = tembokKu[i].y1;
                        tembokKu[i].y1 = tembokKu[i].y2;
                        tembokKu[i].y2 = tempy;
                    }
                    if ((tembokKu[j].y1<=y)&&(y<=tembokKu[j].y2)&&(ultronKu[i].jarak>=jarak(koorIronMan[0], koorIronMan[1], x, y))){
                        cout << ultronKu[i].x << " " << ultronKu[i].y << " tidak tembus tembok " << tembokKu[j].x1 << " " << tembokKu[j].y1 << " "<< tembokKu[j].x2 << " " << tembokKu[j].y2 << endl;
                        ultronKu[i].tidakKena = false;
                        break;
                    } else {
                        cout << ultronKu[i].x << " " << ultronKu[i].y << " tembus tembok " << tembokKu[j].x1 << " " << tembokKu[j].y1 << " "<< tembokKu[j].x2 << " " << tembokKu[j].y2 << endl;
                    }
                }
            }
        } else {
            float m1 = (koorIronMan[1]-ultronKu[i].y)/(koorIronMan[0]-ultronKu[i].x);
            float c1 = (-ultronKu[i].x*m1) + ultronKu[i].y;
            int j;
            for(j=0; j<K; j++){
                if(tembokKu[j].x1==tembokKu[j].x2){
                    float x = tembokKu[j].x1;
                    float y = m1*x + c1;
                    cout << m1 <<" "<< c1 << " " << tembokKu[i].m << " " << tembokKu[i].c << endl;
                    cout << x << " " << y << endl;
                    if ((tembokKu[j].y1<=y)&&(y<=tembokKu[j].y2)&&(ultronKu[i].jarak>=jarak(koorIronMan[0], koorIronMan[1], x, y))){
                        cout << ultronKu[i].x << " " << ultronKu[i].y << " tidak tembus tembok " << tembokKu[j].x1 << " " << tembokKu[j].y1 << " "<< tembokKu[j].x2 << " " << tembokKu[j].y2 << endl;
                        ultronKu[i].tidakKena = false;
                        break;
                    } else {
                        cout << ultronKu[i].x << " " << ultronKu[i].y << " tembus tembok " << tembokKu[j].x1 << " " << tembokKu[j].y1 << " "<< tembokKu[j].x2 << " " << tembokKu[j].y2 << endl;
                    }
                } else {
                    float x = (tembokKu[j].c-c1)/(m1-tembokKu[j].m);
                    float y = m1*x + c1;
                    cout << m1 <<" "<< c1 << " " << tembokKu[i].m << " " << tembokKu[i].c << endl;
                    cout << x << " " << y << endl;
                    if ((tembokKu[j].x1<=x)&&(x<=tembokKu[j].x2)&&(ultronKu[i].jarak>=jarak(koorIronMan[0], koorIronMan[1], x, y))){
                        cout << ultronKu[i].x << " " << ultronKu[i].y << " tidak tembus tembok " << tembokKu[j].x1 << " " << tembokKu[j].y1 << " "<< tembokKu[j].x2 << " " << tembokKu[j].y2 << endl;
                        ultronKu[i].tidakKena = false;
                        break;
                    } else {
                        cout << ultronKu[i].x << " " << ultronKu[i].y << " tembus tembok " << tembokKu[j].x1 << " " << tembokKu[j].y1 << " "<< tembokKu[j].x2 << " " << tembokKu[j].y2 << endl;
                    }
                }
            }
        }
    }
    for(int i=0; i<K; i++){
        if((koorIronMan[0]==tembokKu[i].x1) && (koorIronMan[0]==tembokKu[i].x2)){
            for(int j=0; j<N; j++){
                if((koorIronMan[0]==ultronKu[j].x)&&(abs(koorIronMan[1]-ultronKu[j].y)>abs(koorIronMan[1]-tembokKu[i].y1))){
                    ultronKu[j].tidakKena=false;
                }
            }
        } else if((koorIronMan[1]==tembokKu[i].y1) && (koorIronMan[1]==tembokKu[i].y2)){
            for(int j=0; j<N; j++){
                if((koorIronMan[1]==ultronKu[j].y)&&(abs(koorIronMan[0]-ultronKu[j].x)>abs(koorIronMan[0]-tembokKu[i].x1))){
                ultronKu[j].tidakKena=false;
                }
            }
        } else{
            continue;
        }
    }
    int jumlah =0;
    for(int i=0; i<N; i++){
        if(ultronKu[i].tidakKena==true){
            jumlah++;
        }
    }
    cout << jumlah;
    return 0;

}