#include <bits/stdc++.h>
using namespace std;
#define LIMIT 100
#define LENGTH 50
typedef long long int lli;

int main(){
	
	string numbers[LIMIT];
	lli sum=0;
	lli acarreo=0;
	vector <int> res;
	
	for (int i=0; i<LIMIT; i++)
		cin >> numbers[i];
	
	for (int i=LENGTH-1; i>=0; i--){
		sum=0;
		for(int j=0; j<LIMIT; j++)
			sum+=numbers[j][i]-'0';
		sum+=acarreo;
		
		res.push_back(sum % 10);
		acarreo= sum/10;
		
	}
	
	cout << acarreo;
	for(int i=res.size()-1; i>=0; i--)
		cout << res[i];
	
	
}