#include<bits/stdc++.h>

using namespace std;
#define N 1000000
void nhap(int a[N],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void find(int a[N],int n){
	int j=1,i=0;
	while(i<n){
		if(a[i]==j){
			++j;
			i=0;
		}
		else{
			++i;
		}
	}
	cout<<j<<endl;	
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		int *a=new int[N];
		cin>>n;
		nhap(a,n);
		find(a,n);
		delete[]a;
		--t;
	}
	return 0;
}
