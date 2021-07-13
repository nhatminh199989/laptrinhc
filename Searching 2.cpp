#include<bits/stdc++.h>

using namespace std;
void nhap(int a[1000000],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void tim(int a[1000000],int n,int x){
	int temp=-1;
	for(int i=0;i<n;++i){
		if(a[i]==x){
			temp=1;
			break;
		}
	}
	cout<<temp<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int *a=new int[1000000];
		int n,x;
		cin>>n>>x;
		nhap(a,n);
		sort(a,a+n);
		tim(a,n,x);
		delete[]a;
		--t;
	}
	return 0;
}
