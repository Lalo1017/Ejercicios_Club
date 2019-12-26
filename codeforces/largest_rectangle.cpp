#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;


int main(){
	int n, t, i, aux;
	lli k;
	vector <lli> array;
	stack <lli> pila;
	lli h_actual, h_max;
	
	cin>>t;
	n=t;
	
	while(t--){
		cin>>k;
		array.push_back(k);
	}
	
	while(i<n){
		if(pila.empty() || array[pila.top()] <= array[i])
			pila.push(i++);
		else{
			aux= pila.top();
			pila.pop();
			
			h_actual= array[aux]*(pila.empty()? i : i-pila.top()-1);
			
			if(h_max < h_actual)
				h_max=h_actual;
			
		}
	}
	
	while(!pila.empty()){
		aux=pila.top();
		pila.pop();
		
		h_actual= array[aux]*(pila.empty()? i : i-pila.top()-1);
		
		if(h_max < h_actual)
			h_max=h_actual;
	}	
	cout<<h_max<<"\n";
	return 0;
}