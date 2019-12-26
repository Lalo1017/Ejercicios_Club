#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t, m, n, k, inicio, fin, aux, mitad, minimo, maximo;
	vector <pair<int,int> > v;
	cin >> t;
	
	while(t--){
		
		cin >> m;
		cin >> n;
		
		for(int i=0; i<n; i++){
			cin >> k;
			v.push_back(make_pair(k, i+1));
		}
		sort(v.begin(), v.end());	
		
		for(int i=0; i<v.size()-1; i++){
			
			aux = m-v[i].first;
			
			inicio = i+1;
			fin = v.size()-1;
			
			while(inicio<=fin){
				
				mitad= (inicio+fin)/2;
				
				if(v[mitad].first == aux){
					minimo = min(v[i].second, v[mitad].second);
					maximo = max(v[i].second, v[mitad].second);					
					cout << minimo << ' ' << maximo << '\n';					
					break;
					
				}else if(v[mitad].first > aux)
					fin = mitad-1;
				else
					inicio= mitad+1;			
			}	
			
		}
		
		v.clear();
	}
	
	return 0;
}