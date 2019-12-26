#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli T, n, m, aux, k;

int main(){
	cin >> T;

	for(lli i=0; i<T; i++){
		cin >> n >> m;
		vector <lli> vec;
		for(lli i=0; i<n; i++){
			cin >> k;
			vec.push_back(k);
		}
		
		if(vec[0] != -1){ // Primer caso si el primero es distinto de -1
			for(lli i=1; i< vec.size(); i++)
				vec[i]= (vec[i-1] +1 ) % m;
		}else{
			if(vec[vec.size()-1]!=-1){ // Segundo caso si el ultimo no es -1
				for(lli i= vec.size()-2; i>=0; i--)
					vec[i]= (vec[i+1] + m -1) % m;
			}else{
				lli i;
				for(i=1; i<vec.size()-2; i++){ // Tercer caso si el primero y el ulimo son -1 debemos hacer -1 -1 -1 3 -1 -1 -1
					if(vec[i]!=-1)
						break;
				}
				for(lli j=i+1; j<vec.size(); j++) // Reconstruimos la parte derecha
					vec[j]= (vec[j-1]+1)%m;
				
				for(lli j=i-1; j>=0; j--) // Reconstruimos la parte izquierda
					vec[j]= (vec[j+1] + m -1) % m;
			}
		}
		
		for(lli i=0; i<vec.size(); i++)
		printf("%lli ", vec[i]);
	
		printf("\n");
		
	}
}