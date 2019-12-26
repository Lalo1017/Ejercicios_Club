#include <bits/stdc++.h>
#define EXP 2.71828

using namespace std;

int p, q, r, s, t, u;

double Ecuacion(double medio){
	return (  p* pow(EXP, -medio) + q*sin(medio) + r*cos(medio) + s*tan(medio) +t *medio*medio +u);
}

int main(){
	
	
	double resp, inicio, fin, medio;
	
	cout << fixed;
	cout << setprecision(4);
		
	
	while(cin >> p >> q >> r >> s >> t >> u){
		
		inicio=0;
		fin=1;
		
		for(int i=0; i<30; i++){
			medio= (inicio+fin)/2;
			
			resp= Ecuacion(medio);
					
			if(resp >= 0)
				inicio=medio;
			else
				fin=medio;
		}
		
		int comprobacion= Ecuacion(medio)*100000;
		
		if(comprobacion==0)
			cout << medio << '\n';
		else
			cout << "No solution\n";
		
	}
	
	return 0;
}