#include <bits/stdc++.h>
using namespace std;

int main(){
	double res;
	int entera;
	for(int a=1; a<600; a++){
		for(int b=1; b<600; b++){
			res= a+b+sqrt(a*a+b*b);
			entera= res;
			
			if(entera == 1000)
				cout << a << " " << b << "= " << res << endl;
		}
	}
	
	return 0;
}