#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
	int n, inicio, fin, count=0;
	lli k, n_i;
	vector <lli> v;
	
	cin >> n >> k;
	
	while(n--){
		cin >> n_i;
		v.push_back(n_i);
	}
	
	sort(v.begin(), v.end());
	inicio=v.size()-2, fin=v.size()-1;
	
	while(inicio>=0){
		if(v[fin]-v[inicio]==k)
			count++, inicio--, fin--;
		else if (v[fin]-v[inicio]<k)
			inicio--;
		else
			fin--, inicio=fin-1;
			
	}
	
	cout << count;
	
	
	return 0;
}