#include <bits/stdc++.h>
#define MAX 100
using namespace std;

typedef long long int lli;

int main(){
    lli acum=0;

    lli other= pow ( (MAX*(MAX+1)/2), 2);

    for (int i=1; i<=MAX; i++)
        acum+= pow(i,2);

    cout << acum << endl;
    cout << other << endl;
    cout << (other-acum)<<endl;

    return 0;
}
