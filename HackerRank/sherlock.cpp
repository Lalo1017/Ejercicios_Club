#include <bits/stdc++.h>
using namespace std;

int main(){
	
	unordered_map<char, int> umap;
	vector <int> array;
	string cadena;
	bool flag=true;
	
	cin >> cadena;
	
	for(int i=0; i<cadena.length(); i++)
		umap[cadena[i]]++;
	
	
	for ( auto it = umap.begin(); it != umap.end(); it++ )
		array.push_back(it->second);
	
	sort(array.begin(), array.end());
		
	if(array[array.size()-1] > array[0]){
		if(array[0]==1){
			array.erase(array.begin());
			if(array[0]!= array[array.size()-1])
				flag=false;
		}else{
			array[array.size()-1]--;		
			for(int i=array.size()-1; i>=0; i--){
				if(array[i]!=array[array.size()-1]){
					flag= false;
					break;
				}
			}
		}	
	}
	
	
	cout << ( flag?"YES":"NO");	
	return 0;
}