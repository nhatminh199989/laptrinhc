#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n,int k,int &count){
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]<=k){
			++count;
		}
	}
}
void tim(int a[],int n,int count,int k){
	int min=10000007,s=0;
	for(int i=0;i+count-1<n;++i){
		int j=i;
		while(j<=i+count-1){
			if(a[j]>k){
				++s;
			}
			++j;
		}
		if(s<min){
			min=s;
		}
		s=0;
	}
	cout<<min<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,k;
		cin>>n>>k;
		int count=0;
		int *a=new int[n];
		nhap(a,n,k,count);
		tim(a,n,count,k);
		delete[]a;
		--t;
	}
	return 0;
}
