#include<bits/stdc++.h>

using namespace std;
#define N 1000
void input(int a[N],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void findsum(int a[N],int n){
	int b,d;
	int c=abs(a[0]+a[1]);
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(abs(a[i]+a[j])<c){
				c=abs(a[i]+a[j]);
				b=a[i];
				d=a[j];
			}
		}
	}
	cout<<b+d<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		int *a=new int[N];
		cin>>n;
		input(a,n);
		findsum(a,n);
		delete[]a;
		--t;
	}
	return 0;
}
