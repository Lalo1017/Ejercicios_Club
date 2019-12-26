#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, count;
	string s;
	set <char> map;
	
	cin >> n;
	
	while(n--){
		count=0;
		cin >> s;
		for(int i=0; i<s.length(); i++){
			if(map.find(s[i]) == map.end()){
				map.insert(s[i]);
				count++;
			}
		}
		cout << count << '\n';
		map.clear();		
	}
	
	return 0;
}