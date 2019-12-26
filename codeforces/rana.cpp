#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
	int t;
	lli a, b, k;
	cin >> t;
	while(t--){
		cin >> a >> b >> k;
		if(k%2==0){
			cout << (a*(k>>1) - b*(k>>1)) <<"\n";
		}else{
			cout << (a*((k>>1)+1) - b*(k>>1)) <<"\n";
		}
	}
}