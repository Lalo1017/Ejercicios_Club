#include <bits/stdc++.h>
using namespace std;

bool isVowel(char vow){
	if(vow=='a' || vow == 'e' || vow == 'i' || vow == 'o' || vow == 'u')
		return true;
	return false;
}

int main(){
	string cad1, cad2; 
	cin >> cad1 >> cad2;
	
	if(cad1.length() != cad2.length()){
		cout << "No";
		return 0;
	}
		
	
	for (int i=0; i< cad1.length(); i++){
		if( isVowel(cad1[i]) && !isVowel(cad2[i]) || isVowel(cad2[i]) && !isVowel(cad1[i]) ){
			cout << "No";
			return 0;
		}		
	}
	
	cout << "Yes";
	return 0;
}