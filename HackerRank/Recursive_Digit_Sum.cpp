#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int recursion(string cad){	

	if(cad.length()==1)
		return cad[0]-'0';
	
	lli acum=0;
	
	for(lli i=0; i<cad.length(); i++)
		acum+= cad[i]-'0';
	
	return recursion(to_string(acum));
}


int main(){
	string cad;
	lli k;
	cin >> cad >> k;
	int prim= recursion(cad);
	cout << recursion(to_string(prim*k));
}