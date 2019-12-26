#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(){
	
	bool estado= true; // true= postivo, false= negativo
	bool esCero=false; // indica si hubo algun cero
	
	lli n, movimientos=0, k;
	
	cin >> n;
	
	while(n--){
		
		cin >> k;
		
		if(k>0){ // Caso que el numero sea positivo
			movimientos += k-1;
		}
		
		else if(k<0){ // Caso que el numero sea negativo
			estado= !estado;
			movimientos += abs(k)-1;
		}
		
		else if(k==0){ // Caso si hay algun cero
			esCero= true;
			movimientos += 1;
		}
		
	}
	
	if(estado == false && esCero == false)
		movimientos += 2;
	
	cout << movimientos;
	
	
	return 0;
}