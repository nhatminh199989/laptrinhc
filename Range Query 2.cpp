#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
int numbermax(int a[],int L,int R){
	int max=0,j;
	for(int i=L;i<=R;++i){
		if(a[i]>=max){
			max=a[i];
			j=i;
		}
	}
	return j;
}
bool check(int a[],int L,int R){
	for(int i=L;i<numbermax(a,L,R);++i){
		if(a[i+1]<a[i]){
			return 0;
		}
	}
	return 1;
}
bool check1(int a[],int L,int R){
	for(int i=R;i>numbermax(a,L,R);--i){
		if(a[i]>a[i-1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int a[10006],n,L,R;
		cin>>n;
		nhap(a,n);
		cin>>L>>R;
		if(L>R){
			swap(L,R);
		}
		if(check(a,L,R)==1&&check1(a,L,R)==1){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
		cout<<endl;
		--t;
	}
	return 0;
}
