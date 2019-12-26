#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(){
	
	int n;
	lli k, a;
	vector <lli> array;
	
	cin >> n >> k;
	
	while(n--){
		cin >> a;
		array.push_back(a);
	}
	
	
		sort(array.begin(), array.end());
		lli fin= array.size()-1;
		lli inicio, mitad;
		
		while(k--){
			
			inicio= fin/2;
			
			while(inicio<=fin){
				
				cout << inicio << endl << mitad << endl << fin << endl;
			
				if(array[mitad]>array[inicio])
					fin= mitad-1;
				
				else if( array[mitad]==array[inicio]){
					if(mitad==inicio)
						mitad++;
					else
						inicio=mitad+1;
				}
				else if(array[mitad]>array[inicio]){
					array[inicio]++;
					break;
				}
					
			}
		}
		
		cout << array[array.size()/2];
		
	
	
	
	return 0;
}