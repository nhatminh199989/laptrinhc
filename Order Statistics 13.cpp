#include<bits/stdc++.h>

using namespace std;
void check(){
	int n,m;
	long long sum=0,sum1=0,max=0;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int j=0;j<m;j++) cin>>b[j];
	for(int i=0;i<n;i++){
		sum+=a[i];
		for(int j=i+1;j<m;j++){
			sum1+=b[j];
			if(max<sum+sum1){
				max=sum+sum1;
			}
		}
		if(max<sum) max=sum;
		sum1=0;
	}
	sum=0;
	for(int i=0;i<m;i++){
		sum+=b[i];
		for(int j=i+1;j<n;j++){
			sum1+=a[j];
			if(max<sum+sum1){
				max=sum+sum1;
			}
		}
		sum1=0;
		if(max<sum) max=sum;
	}
	cout<<max<<endl;
}
int main(){
	int n;
	cin>>n;
	while(n>0){
		check();
		--n;
	}
	return 0;
}
