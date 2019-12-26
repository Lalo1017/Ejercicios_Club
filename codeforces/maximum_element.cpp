#include <bits/stdc++.h>
typedef long long int lli;

using namespace std;

int main(){
	int type;
	stack <lli> pila, pila_aux;
	pila_aux.push(0);
	lli n=0;
	cin >> n;
	
	while(n--){
		cin >> type;
		switch(type){
			case 1:{
				lli x;
				cin >> x;
				pila.push(x);
				if(x >= pila_aux.top())
					pila_aux.push(x);
				break;
			}
			
			case 2:{
				if(pila.top() == pila_aux.top())
					pila_aux.pop();
				pila.pop();
				break;
			}
			
			case 3:{
				cout << pila_aux.top() << "\n";
				break;
			}
		}
	}
	return 0;
}