#include<iostream>
#include<cstring>
using namespace std;

bool allLowerCase(string& str) {
    for (char c : str) {
        if (c < 'a' || c > 'z') {
            return false;
        }
    }
    return true;
}

int main(){
    string pattern;
    cin >> pattern;
    int N;
    cin >> N;
    string kata[N];
    for(int i=0; i<N; i++){
        cin >> kata[i];
    }
    string patternSebelum, patternSesudah;
    int letakBintang, panjangPattern;
    bool adaPatternSebelum = true;
    bool adaPatternSesudah = true;
    panjangPattern = pattern.size();
    letakBintang = pattern.find('*');
    if(letakBintang == 0){
        adaPatternSebelum = false;
    }
    patternSebelum = pattern.substr(0, letakBintang);
    int panjangPatternSesudah = panjangPattern - letakBintang-1;
    patternSesudah = pattern.substr(letakBintang+1, panjangPatternSesudah);
    if(panjangPatternSesudah == 0){
        adaPatternSesudah = false;
    }
    for(int i=0; i<N; i++){
        if(allLowerCase(kata[i])){
            int panjangKata = kata[i].size();
            string kataSebelum, kataSesudah;
            if(panjangKata<letakBintang){
                continue;
            }
            kataSebelum = kata[i].substr(0, letakBintang);
            string kataBaru = kata[i].substr(letakBintang, panjangKata - letakBintang);
            int panjangKataBaru = kataBaru.size();
            if(panjangKataBaru>=panjangPatternSesudah){
                kataSesudah = kataBaru.substr(panjangKataBaru-panjangPatternSesudah,panjangPatternSesudah);
            } else {
                continue;
            }
            if(adaPatternSebelum && adaPatternSesudah){
                if((kataSebelum == patternSebelum) && (kataSesudah == patternSesudah)){
                    cout << kata[i] << endl;
                    continue;
                }
            } else if(adaPatternSebelum){
                if((kataSebelum == patternSebelum)){
                    cout << kata[i] << endl;
                    continue;
                }            
            } else if(adaPatternSesudah){
                if((kataSesudah == patternSesudah)){
                    cout << kata[i] << endl;
                    continue;
                }
            } else {
                cout << kata[i] << endl;
                continue;
            }
        }
    }
    return 0;
}