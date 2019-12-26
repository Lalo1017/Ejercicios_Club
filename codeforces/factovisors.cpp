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

vector <pair<lli, int> > factorize(lli n){
	vector <pair<lli, int> > f;
	for(lli p : primes){
		if(p*p > n) break;
		int pot= 0;
		while(n%p == 0){
			pot++;
			n/=p;
		}
		if(pot)
			f.emplace_back(p, pot);
	}
	if(n>1)
		f.emplace_back(n,1);
	return f;
}

lli get_powers(lli n, lli p){
    lli res = 0;
    for (lli power = p ; power <= n ; power *= p)
        res += n/power;
    return res;
}


int main(){
	
	lli m, n;
	bool flag;
	
	primesSieve(10000000);	
	
	while(cin >> n >> m){
		
		flag= true;		

		vector<pair<lli,int> > v= factorize (m);
		
		
		for(int i=0; i<v.size(); i++){
			if(get_powers(n, v[i].first) < v[i].second){
				flag=false;
				break;
			}
		}
		
		if(flag)
			cout << m << " divides " << n << "!\n";
		else 
			cout << m << " does not divide " << n << "!\n";
		
	}
	
	

	return 0;
}