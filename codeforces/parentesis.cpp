#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;	
	cin >> n;
	while(n--){		
		string cadena;
		stack <char> pila;
		bool flag=false;
		
		cin >> cadena;
		
		for(int i=0; i<cadena.length(); i++){
			
			if(cadena[i]=='(' || cadena[i]=='[' || cadena[i]=='{')
				pila.push(cadena[i]);
						
			if(cadena[i]==')'){
				if(pila.empty() || pila.top()!='('){
					cout <<"NO\n";
					flag=true;
					break;
				}				
				pila.pop();			
			}
			
			
			if(cadena[i]==']'){
				if(pila.empty() || pila.top()!='['){
					cout <<"NO\n";
					flag=true;
					break;
				}				
				pila.pop();			
			}
			
				
			if(cadena[i]=='}'){
				if(pila.empty() || pila.top()!='{'){
					cout <<"NO\n";
					flag=true;
					break;
				}				
				pila.pop();			
			}			
		}
				
		if(!flag){
			if(pila.empty())
				cout << "YES\n";
			else
				cout <<"NO\n";
		}
		
	}
	return 0;
}