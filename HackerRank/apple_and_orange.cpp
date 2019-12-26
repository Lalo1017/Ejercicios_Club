#include <bits/stdc++.h>
using namespace std;

int main(){
	int s, t, a, b, m, n, k;
	int apples=0, oranges=0;
	cin >> s >> t;
	cin >> a >> b;
	cin >> m >> n;
	
	while(m--){
		cin >> k;
		k+=a;
		if(k>=s && k<=t)
			apples++;
	}
	
	while(n--){
		cin >> k;
		k+=b;
		if(k>=s && k<=t)
			oranges++;
	}
	
	cout << apples << '\n' << oranges;
	
	return 0;
}