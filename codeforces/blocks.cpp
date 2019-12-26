#include <bits/stdc++.h>
using namespace std;

// W = 0 , B = 1

int main(){

	int n;
	char k;

	cin >> n;

	int array[n];
	vector <int> v;

	for(int i=0; i<n; i++){
		cin >> k;
		array[i] = (k == 'W' ? 0 : 1);
	}


	int pivote = array[0]; // Este valor es con el que vamos a empezar

	for(int i=1; i<n-1; i++){

		if( array[i] != pivote ){
			v.push_back(i+1);
			array[i] ^= 1;
			array[i+1] ^=1;
		}

	}

	// Significa que hay cantidad impares de 0 y pares de 1 o al reves o ambos son impares y no hay solucion
	if(pivote != array[n-1]){
		pivote= array[n-1];

		for(int i=n-2; i>0; i--){

			if( array[i] != pivote ){
				v.push_back(i);
				array[i] ^= 1;
				array[i-1] ^= 1;
			}
		}

	}

	if( pivote != array[0] ){
		cout << -1;
		return 0;
	}

	cout << v.size() << '\n';
	for(int i=0; i<v.size(); i++)
		cout << v[i] << ' ';


	return 0;
}