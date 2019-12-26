#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t, n, k, izquierda, derecha;
	vector <int> v;
	bool flag;
	cin >> t;
	
	while(t--){
		
		izquierda=0, derecha=0, flag=false;
		
		cin >> n;
		while(n--){
			cin >> k;
			v.push_back(k);
			derecha += k;
		}

		for(int i=0; i<v.size(); i++){			
			
			derecha -= v[i];
			
			if(izquierda == derecha){
				flag= true;
				break;
			}
			
			izquierda += v[i];												
			
		}
		
		cout << (flag?"YES\n":"NO\n");
	
		v.clear();
	}
	
	return 0;
}