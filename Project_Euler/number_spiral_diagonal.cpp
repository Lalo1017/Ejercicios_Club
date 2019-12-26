#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){

    lli aux=0;

    for(int i=3; i<= 1001; i+=2){
        lli cuadrado= i*i;
        aux+= cuadrado + (cuadrado - i + 1) + (cuadrado - 2*i + 2) + (cuadrado - 3*i + 3);
    }

    cout << ( aux +1) <<endl;

    return 0;
}