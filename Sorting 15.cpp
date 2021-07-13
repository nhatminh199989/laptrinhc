#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		
		long long count = 0;
		for(int i = 0; i < n;i++){
			long long it = upper_bound(a,a+n,a[i]+k-1) - a ;
			count += (it-i-1);
			
		}
		cout << count << endl;
	}
}
