#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
	lli raiz= sqrt(600851475143);
	lli n= 600851475143;
	lli prim_max=0;
	cout << raiz << endl;
	lli i;
	for(i=1; i<=raiz; i++){
		if(n%i == 0){
			prim_max=i;
			n/=i;
			cout << i << endl;
		}
	}
}