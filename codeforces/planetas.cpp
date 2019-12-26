#include <bits/stdc++.h>
using namespace std;

int n;
vector <double> v;

double Verifica(double medio){
	double aux=0;
	for(int i=0; i<n; i++){
		aux+=1/(v[i]-medio);
	}
	return aux;
}

int main(){

	double k, inicio, mitad, fin, res;
	
	cout << fixed;
	cout << setprecision(3);

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> k;
		v.push_back(k);
	}
	
	sort(v.begin(), v.end());

	cout << n-1 << '\n';


	for(int i=0; i<v.size()-1; i++){
		inicio = v[i];
		fin = v[i+1];
		for(int p=0; p<25; p++){
			mitad=(inicio+fin)/2;
			res= Verifica(mitad);
			if(res>0)
				fin=mitad;
			else
				inicio=mitad;
		}
		cout << mitad << ' ';

	}
}