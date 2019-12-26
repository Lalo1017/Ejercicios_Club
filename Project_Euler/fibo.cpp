#include <bits/stdc++.h>
using namespace std;
#define MAX 4000000
typedef long long int lli;

vector <lli> array(MAX, -1); 

lli fibo(lli n){
	if(n == 0 || n == 1){
		return n;
	}
	return fibo(n - 2) + fibo(n - 1);
}

int main(){
	cout<<fibo(MAX)<< endl;
	return 0;
}