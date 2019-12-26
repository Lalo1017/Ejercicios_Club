#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int p;
	string s1, s2;
	set<char> map;
	bool flag;
	
	cin >> p;
	
	while(p--){
		flag= false;
		cin >> s1;
		cin >> s2;
		for(int i=0; i<s1.length(); i++)
			map.insert(s1[i]);
		
		for(int i=0; i<s2.length(); i++){
			if(map.find(s2[i]) != map.end()){
				flag= true;
				break;
			}
		}
		
		cout << (flag ? "YES\n" : "NO\n");
		
		map.clear();
	}
	
	return 0;
}