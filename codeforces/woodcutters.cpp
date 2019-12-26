#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli Minimo(lli posicion1, lli distancia1, lli posicion2, lli distancia2, lli altura){
	
	if( distancia1 > altura )
		return posicion1;
	
	else if( distancia2 > altura )
		return posicion2;
	
	else
		return -1;
}

int main(){
	
	int n;
	lli xi, hi, dist_aux=0, talados=2, minimo;
	vector <lli> alturas;
	vector <lli> distancias;
	
	cin >> n;
	
	if( n == 1 || n == 2)
		cout << n;
	
	else{
		
		while(n--){
			
			cin >> xi >> hi;		
			alturas.push_back(hi);			
			distancias.push_back(xi-dist_aux);
			dist_aux=xi;
		
		}
		
		distancias.erase(distancias.begin());
		alturas.erase(alturas.begin());
		alturas.erase(alturas.begin()+alturas.size()-1);
		
		for(int i=0; i<alturas.size(); i++){
			minimo= Minimo( i, distancias[i], i+1, distancias[i+1], alturas[i] );
			if(minimo != -1){
				distancias[minimo]-=alturas[i];
				talados++;
			}
		}
		
		cout << talados;
	
	}
	
	return 0;
}