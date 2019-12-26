#include <bits/stdc++.h>
using namespace std;

	void Recursion(vector <int> &vec, int suma, int index, bool &flag){

	if(index== vec.size()-1){
		if(suma%360==0)
			flag=true;
		return;
	}
	index++;
	Recursion(vec, suma+vec[index], index, flag);
	Recursion(vec, suma-vec[index], index, flag);

}


int main(){
	vector <int> vec;
	int n, k;
	cin >> n;
	while(n--){
		cin >> k;
		vec.push_back(k);
	}
	
	bool flag=false;	
	Recursion(vec, vec[0], 0, flag);
	cout << (flag?"YES":"NO");
	return 0;
}