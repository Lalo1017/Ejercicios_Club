#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    vector <int> array;

    cin >> t;
    while(t--){
        cin >> n;
        while(n--){
            cin >> k;
            array.push_back(k);
        }
		//Aquí empezamos el algoritmo
		int count=0, diferencia;
		bool flag= false;
		for(int i=0; i<array.size(); i++){
			diferencia= ((i+1) - array[i]);
			if(diferencia > 0)
				count += diferencia;
			if(diferencia < -2)
				flag=true;
		}
		if(flag)
			cout << "Too chaotic\n";
		else
			cout << count << "\n";
        array.clear();
    }

    return 0;
}