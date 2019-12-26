#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
#define MAX_NUM 1e18

int main(){
	map<lli, lli> les_gusta;
	map<lli, lli> no_les_gusta;
	map<lli ,lli> :: iterator itr;
	
	
	lli n, k, l;
	int type;
	
	cin >> n;
	lli type_1=0;
	lli type_2=0;
	
	for(lli i=0; i<n; i++){
		cin >> type;
		cin >> k;
		
		if(type == 1){
			type_1++;
			while(k--){				
				cin >> l;
				if(i==0)
					les_gusta.insert(pair<lli, lli>(l, 1));
				else{
					itr = les_gusta.find(l);
					if (itr != les_gusta.end())
						les_gusta.insert(pair<lli, lli>(l, (itr->second)++) );
				}
			}
		}
		
		if(type == 2){
			type_2++;
			while(k--){
				cin >> l;
				itr = les_gusta.find(l); //Si encuentro un valor lo borro
				if (itr != les_gusta.end())
					les_gusta.erase(itr);
				
				itr = no_les_gusta.find(l);
					if (itr == no_les_gusta.end())
						no_les_gusta.insert(pair<lli, lli>(l, l ) );
			}
		}
		
	}
	
	lli validos=0;
	
	for (itr = les_gusta.begin(); itr != les_gusta.end(); ++itr) { 
        //cout << itr->first << '\t' << itr->second << '\n'; 
		if(itr->second == type_1)
			validos++;
    }
	
	if(type_2 == n){
		lli big_num =  (1e18 - no_les_gusta.size());
		printf("%lld\n", big_num);
	}
	
	else
		cout << validos << endl;
	
	return 0;
}