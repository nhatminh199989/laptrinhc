#include<bits/stdc++.h>

using namespace std;
void nhap(int a[10000000],int n){
	int max=-100000;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<max<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		int *a=new int[10000000];
		cin>>n;
		nhap(a,n);
		delete[]a;
		--t;
	}
	return 0;
}
