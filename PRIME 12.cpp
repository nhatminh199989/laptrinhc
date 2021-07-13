#include<bits/stdc++.h>

using namespace std;
void tim(int n,int k){
	int a[10005],j=1;
	for(int i=2;i<=sqrt(n);++i){
		while(n%i==0){
			a[j++]=i;
			n/=i;
		}
	}
	if(n>1){
		a[j++]=n;
	}
	if(k>=j){
		cout<<"-1";
	}
	else{
		cout<<a[k];
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,k;
		cin>>n>>k;
		tim(n,k);
		cout<<endl;
		--t;
	}
	return 0;
}

