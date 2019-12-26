#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

vector<bool> isPrime;
vector <lli> primes;

void primesSieve(lli n){
	isPrime.resize(n + 1, true);
	isPrime[0] = isPrime[1] = false;
	primes.push_back(2);
	for(lli i = 4; i <= n; i += 2) isPrime[i] = false;
	lli limit = sqrt(n);
	for(lli i = 3; i <= n; i += 2){
		if(isPrime[i]){
			primes.push_back(i);
			if(i <= limit)
				for(lli j = i * i; j <= n; j += 2 * i)
					isPrime[j] = false;
		}
	}
}

lli potInFactorial(lli n, lli p){
	lli ans = 0, div = n;
	while(div /= p) ans += div;
	return ans;
}

vector<pair<lli, lli> > factorizeFactorial(lli n){
	vector<pair<lli, lli> > f;
	for(lli p : primes){
		if(p > n) break;
		f.emplace_back(p, potInFactorial(n, p));
	}
	return f;
}

int main(){
	int n;
	primesSieve(100);
	
	while(cin >> n && n!=0){
		
		vector<pair<lli, lli> > v = factorizeFactorial(n);
		
		printf("%3d! =", n);
		
		for(lli i=0, j=0; i < v.size(); i++){
			
			if(i!=0 && i%15==0)
				cout << "\n      ";
			
			printf("%3d", v[i].second);
				
		}
		
		cout << '\n';
	}
}