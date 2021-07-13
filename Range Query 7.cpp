#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void tim(int a[],int n,int x){
	int min=10000007;
	for(int i=0;i<n;++i){
		long long sum=0;
		int temp;
		for(int j=i;j<n;++j){
			sum+=a[j];
			if(sum>x){
				temp=j-i+1;
				if(min>temp){
					min=temp;
				}
				break;
			}
		}
	}
	if(min==10000007){
		cout<<"-1"<<endl;
	}
	else{
		cout<<min<<endl;
	}	
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,x;
		cin>>n>>x;
		int a[n];
		nhap(a,n);
		tim(a,n,x);
		--t;
	}
	return 0;
}

