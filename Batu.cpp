#include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int n,k;
        cin >> n >> k;
     
        int w[k+1], h[k+1];
        for (int i=1; i<=k; i++) {
            cin >> w[i] >> h[i];
        }
     
        int matrix[k+1][n+1], beban = 0, hasil[k+1], now = -1;
     
        for (int i=0; i<=k; i++) {
            for (int j=0; j<=n; j++) {
                if (i==0 || j==0) matrix[i][j]=0;
                else {
                    matrix[i][j] = matrix[i-1][j];
                    if (j >= w[i])
                        matrix[i][j] = max(matrix[i][j], matrix[i-1][j-w[i]]+h[i]);
                }
            }
        }
     
        for (int i=0; i<=n; i++) {
            if (matrix[k][i]==matrix[k][n]){
                beban=i;
                break;
            }
        }
     
        for (int i=k; i>=1; i--) {
            if (matrix[i][beban] == matrix[i-1][beban]) continue;
            now++;
            hasil[now]=i;
            beban -= w[i];
     
        }
     
        for (int i=now; i>=0; i--)
            cout << hasil[i] << endl;
    }