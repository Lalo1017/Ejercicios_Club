#include <bits/stdc++.h>
using namespace std;

int main(){
	
	vector<vector<int> > vec(6);
	for(int i=0; i<6 ; i++){
		vec[i].resize(6);
		for(int j=0; j<6; j++)
			cin >> vec[i][j];
	}
	
	int sum_total=-64;
	for(int i=1; i<5 ; i++){	
		for(int j=1; j<5; j++){	
			int sum_actual=0;	
			sum_actual+=vec[i][j];
			for(int k=j-1; k<=j+1; k++){
				sum_actual+=vec[i-1][k];
				sum_actual+=vec[i+1][k];
			}
			if(sum_actual>sum_total)
				sum_total=sum_actual;
		}
	}	
	cout <<sum_total;		
}