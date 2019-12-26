#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli establos, vacas;
vector <lli> v;

bool Verifica(lli &mitad){
	lli actual=0, count=1;

	for(lli i=1; i<establos; i++){
		if(v[i]-v[actual] >= mitad){
			actual=i;
			count++;
		}		
	}
	
	if(count>=vacas)
			return true;
	return false;
}

int main(){
	
	int t;
	lli posiciones, inicio, fin, mitad, resp=0;
	
	cin >> t;
	
	for(int j=0; j<t; j++){
		v.clear();
		inicio =1 , fin= 1<<30;
		cin >> establos >> vacas;
		for(lli i=0; i<establos; i++){
			cin >> posiciones;
			v.push_back(posiciones);
		
		}
		
		sort(v.begin(), v.begin()+establos);
		
		while(inicio<=fin){
			mitad=(inicio+fin)/2;
			if(Verifica(mitad)){
				inicio=mitad+1;
				resp=mitad;
			}else
				fin=mitad-1;
		}
		cout << resp << endl;
	}
	
	return 0;
}