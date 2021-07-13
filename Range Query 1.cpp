#include<iostream>

using namespace std;
void nhap(int a[1000],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
int sum(int a[1000],int L,int R){
	int sum=0;
	for(int i=L-1;i<R;++i){
		sum+=a[i];
	}
	return sum;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,Q,L,R;
		int *a=new int[1000];
		cin>>n>>Q;
		nhap(a,n);
		while(Q>0){
			cin>>L>>R;
			if(L>R){
			swap(L,R);
			}
			cout<<sum(a,L,R)<<endl;
			--Q;
		}
		delete[]a;
		--t;
	}
	return 0;
}
