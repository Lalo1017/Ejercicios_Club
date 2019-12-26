#include <bits/stdc++.h>

using namespace std;

int calcula (int &a, int &b, int &c, int &d, int &e, int &f){

	if(d == 0)
		return 0;

	if( a == 0 && ( b== 0 || c == 0 ) )
		return 0;



	int tipo1 = e * min(a, d);

	int min_tipo2 = min(b, min(c, d));
	int tipo2 = f * min_tipo2;

	int e_final = (tipo1 + f * min (b, min ( c, d - min ( a, d) ) ));
	int f_final = ( tipo2 + e * min ( a, d - min_tipo2 ) );


	return max(e_final, f_final);
}


int main(){

	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	cout << calcula (a, b, c, d, e, f);

	return 0;
}