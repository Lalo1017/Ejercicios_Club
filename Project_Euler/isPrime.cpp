#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli isPrime(lli n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return 0; 
    if (n <= 3) 
        return n; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return 0; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return 0; 
  
    return n; 
} 


int main(){
	lli sum=0;
	
	for(lli i=2; i < 2000000; i++){
		sum+=isPrime(i);
	}
	
	cout << sum<< endl;
}