#include <bits/stdc++.h>
using namespace std;
int N, Q, x;

int main(){
	int cont=0;
	while(cin >> N >> Q && (N && Q)){
		cout <<"CASE# "<<++cont<<":\n";
		int *num= new int[N];
		for (int i=0; i<N; i++)
			cin>> num[i];
		sort (num, num+N);
		while(Q--){
			cin >>x;
			int ini=0, fin=N-1, mid, res=-1;
			while(ini<=fin){
				mid=(ini+fin)/2;
				int tmp= num[mid];
				if(tmp==x){
					fin=mid-1;
					res=mid;
				}
				if(tmp>x)
					fin=mid-1;
				if(tmp<x)
					ini=mid+1;
			}		
			if(res==-1)
				cout <<x<<" not found\n";
			else{			
				cout <<x<<" found at "<<res+1<<"\n";
			}
		}
	}
}