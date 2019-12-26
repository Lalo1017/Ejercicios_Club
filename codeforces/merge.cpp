#include <bits/stdc++.h>

typedef long long int lli;
using namespace std;


void Merge(int *array, int l, int m, int r){
	int n1= m-l+1;
	int n2= r-m;
	
	int i, j, k;
	
	int *L= new int[n1];
	int *R= new int[n2];
	
	for(i=0; i<n1; i++)
		L[i]= array[l+i];
		
	for(j=0; j<n2; j++)
		R[j]= array[(m+1)+j];
	
	i=0;
	j=0;
	k=l;
	
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			array[k]= L[i];
			i++;
		}else{
			array[k]= R[j];
			j++;
		}
		k++;
	}
	
	while(i<n1){
		array[k++]=L[i++];
	}
	
	while(j<n2){
		array[k++]=R[j++];
	}
	
}

void MergeSort(int *array, int l, int r){
	
	if(l < r){		
		int m= l+(r-l)/2; //Sacamos la mitad de cada subarreglo		
		MergeSort(array, l, m); // Enviamos la mitad izquierda
		MergeSort(array, m+1, r); // Enviamos la mitad derecha
		Merge(array, l, m, r); // Enviamos las dos mitades para ordenarlas y mezclarlas		
	}	
}

int main(){
	int n, t, k;
	cin >>t;
	n=0;
	
	int *array= new int[t];
	
	while(t--){
		cin >> k;
		array[n++]= k;
	}
	
	MergeSort(array, 0, n-1);
	
	for(int i=0; i<n; i++)
		cout << array[i] <<" ";
	
	
	return 0;
}
