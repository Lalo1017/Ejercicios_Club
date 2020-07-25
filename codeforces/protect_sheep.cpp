#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
    int R, C;
	char aux;
	bool valid = true;

    cin >> R >> C;
	
	char **matrix = new char*[R];
		for (int i = 0 ; i < R ; i++)
			matrix[i] = new char[C];

    for(int i = 0 ; i < R ; i++){
        for(int j = 0; j < C; j++){
            cin >> aux;
            matrix[i][j] = aux;
        }
    }
	
    for(int i = 0 ; i < R ; i++){
        for(int j = 0; j < C; j++){
			if (matrix[i][j] == 'S'){
				if(j > 0){
					if(matrix[i][j-1] == '.')
						matrix[i][j-1] = 'D';
					else if(matrix[i][j-1] == 'W')
						valid = false;
				}
				
				if(j < C - 1){
					if(matrix[i][j+1] == '.')
						matrix[i][j+1] = 'D';
					else if(matrix[i][j+1] == 'W')
						valid = false;
				}
				
				if(i > 0){
					if(matrix[i-1][j] == '.')
						matrix[i-1][j] = 'D';
					else if(matrix[i-1][j] == 'W')
						valid = false;
				}
				
				if(i < R - 1){
					if(matrix[i+1][j] == '.')
						matrix[i+1][j] = 'D';
					else if(matrix[i+1][j] == 'W')
						valid = false;
				}
			}
        }
    }

	if(valid){
		cout << "Yes\n";
		for(int i = 0 ; i < R ; i++){
			for(int j = 0; j < C; j++){
				cout << matrix[i][j];
			}
			cout << '\n';
		}
	}else
		cout << "No\n";
    return 0;
}