#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(){
	lli n, A, B, k;
	vector <lli> numbers;
	lli total=0;
	double result;
	lli holes_block=0;
	
	cin >> n >> A >> B;
	lli index= n-1;
	
	for(lli i=0; i<n; i++){
		cin >> k;
		numbers.push_back(k);
		total+=k;
	}
	
	sort(numbers.begin()+1, numbers.end());
	result= (double)(A*numbers[0])/total;

	while(result < B){
		total -=  numbers[index--];
		result= (double) ((double) A*numbers[0] /  (double)( total) );
		holes_block++;
	}
	
	cout << holes_block;
}