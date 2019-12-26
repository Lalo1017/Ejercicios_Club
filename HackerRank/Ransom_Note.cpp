#include <bits/stdc++.h>
using namespace std;
// compilar g++ Ransom_Note.cpp -std=c++0x
int main(){
	
    int m, n;
	string aux;
	unordered_map<string, int> umap;
	bool flag= true;
	
	cin >> m >> n;
	
	while(m--){
		cin >> aux;
		if (umap.find(aux) == umap.end()) // No se encontro la palabra, hay que agregarla
			umap[aux] = 1;
		else // Ya se encontro la palabra, solo hay que sumar al contador
			umap[aux]++;
	}
	
	while(n--){
		cin >> aux;
		if (umap.find(aux) == umap.end()){ // No se ha encontrado alguna palabra
			flag=false;
			break;
		}	
		else{
			if(umap[aux]!=0)
				umap[aux]--;
			else{
				flag=false;
				break;
			}				
		}	
	}
	
    cout << (flag ? "Yes" : "No");	
    return 0;
}