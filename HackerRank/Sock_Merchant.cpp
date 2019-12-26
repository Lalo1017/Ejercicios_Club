#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	vector <int> vec;
	cin >> n;
	while(n--){
		cin >>k;
		vec.push_back(k);
	}
	sort(vec.begin(), vec.end());
	
	int total=0;
	int contador_pares=1;
	int valor_actual= vec[0];
	vec.push_back(101);
	
	for(int i=1; i<vec.size(); i++){		
		if(vec[i]==valor_actual){
			contador_pares++;
		}else{			
			total+= (contador_pares / 2);
			contador_pares=1;
			valor_actual= vec[i];
		}
		
	}
	cout << total;
	
}