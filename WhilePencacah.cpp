#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int bilangan;
    int total = 0;
    while(scanf("%d", &bilangan) !=EOF){
        total += bilangan;
    }
    cout << total;
    return 0;
}