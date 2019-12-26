#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int N, n_tracks, k;
	
	while( cin >> N >> n_tracks){
		
		vector <int> tracks;
		
		int maxX= n_tracks+1;
		int maxY= N+1;
		
		while(n_tracks--){
			cin >> k;			
			tracks.push_back(k);;
		}		
		
		int **matrix = new int*[maxX];
		for (int i = 0 ; i < maxX ; i++)
			matrix[i] = new int[maxY];
			
		//Agrego la fila y la columna pivote
		
		for(int i=0; i<maxX; i++)
			matrix[i][0]= 0;
		
		for(int j=0; j<maxY; j++)
			matrix[0][j]= 0;
		
		for(int i=1; i<maxX; i++){
			for(int j=1; j<maxY; j++){
				if(tracks[i-1]<= j){
					matrix[i][j]= max((matrix[i-1][j-tracks[i-1]]+tracks[i-1]), matrix[i-1][j]);
				}else{
					matrix[i][j]= matrix[i-1][j];
				}
					
			}
		}
		
		int j = maxY - 1;
		for (int i = maxX - 1; i > 0; i--) {
			if (matrix[i][j] == matrix[i - 1][j])
				continue;
			else {
				cout << tracks[i-1]<< " ";
				j -= tracks[i - 1];
			}
		}
		
		cout << "sum:"<< matrix[maxX-1][maxY-1] << "\n";
	}
	
	return 0;
}