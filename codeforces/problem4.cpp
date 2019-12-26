#include <bits/stdc++.h>
using namespace std;

int main(){
	string posiciones[]={"north", "east", "south", "west"};
	string orden;
	int indicador=0, n;
	cin >> n;
	while(n--){
		cin >> orden;
		if(orden == "left")
			indicador= (indicador+1)%4;
		else if(orden == "right")
			indicador= (indicador+3)%4;
		else
			indicador= (indicador+2)%4;
	}
	cout << posiciones[indicador];
	return 0;
}