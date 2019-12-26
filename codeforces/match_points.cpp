#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
	
	lli n, z, k;
	vector <lli> v;
	
	cin >> n >> z;
	
	while(n--){
		cin >> k;
		v.push_back(k);
	}
	
	sort(v.begin(), v.begin()+v.size());
	
	lli inicio, fin, mitad, contador=0, aux;
	
	for(lli i=0; i<v.size(); i++){
		
		inicio= i+1;
		fin= v.size()-1;
		aux=-1;
		
		while(inicio <= fin){
			mitad= (inicio+fin)/2;
			if(v[mitad]-v[i] >= z){
				fin= mitad-1;
				aux= mitad;
			}else
				inicio= mitad+1;
		}
		if(aux!=-1){
			v.erase(v.begin()+i);
			v.erase(v.begin()+(aux-1));
			contador++;
			i--;
		}
		
	}
	
	cout << contador;
	
	return 0;
}