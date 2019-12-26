#include <bits/stdc++.h>
using namespace std;

int main(){
	string cad;
	double p;
	double resp=0;	
	cin >> cad;
	cin >> p;	
	for(int i=0; i<cad.length(); i++){
		if(cad[i]== '?')
			resp+=p;
		else
			resp+=cad[i]-'0';
	}	
	printf("%.5lf", (resp/cad.length()) );	
}