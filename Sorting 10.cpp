#include<bits/stdc++.h>

using namespace std;
#define N 10000000
int a[N];
void nhap(int a[N],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		set<long>s;
		cin>>n;
		nhap(a,n);
		for(int i=0;i<n;++i){
			int temp=a[i];
			while(temp>0){
				int j=temp%10;
				s.insert(j);
				temp/=10;
			}
		}
		for(set<long>::iterator it=s.begin();it!=s.end();++it){
			cout<<*it<<" ";
		}
		cout<<endl;
		--t;
	}
	return 0;
}
