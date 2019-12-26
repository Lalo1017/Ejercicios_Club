#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, l, count;
    cin >> t;
    while(t--){
        count= 0;
        cin >> n >> k;
        for(int i=0; i<n; i++){
            cin >> l;
            if(l <= 0)
                count++;
        }
        cout << (count >= k ? "NO" : "YES") << '\n';
    }

    return 0;
}