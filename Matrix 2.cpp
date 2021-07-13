#include<bits/stdc++.h>

using namespace std;
#define N 100
void nhap(int a[N][N],int n){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>a[i][j];
		}
	}
}
void tim(int a[N][N],int n){
	set<int>s;
	for(int i=0;i<n;++i){
		s.insert(a[0][i]);
	}
	int count=0;
	for(set<int>::iterator it=s.begin();it!=s.end();++it){
		int temp=0;
		for(int i=1;i<n;++i){
			int b=0;
			for(int j=0;j<n;++j){
				if(a[i][j]==(*it)){
					b=1;
					break;
				}
			}
			if(b==1){
				++temp;
			}
		}
		if(temp==n-1){
			++count;
		}
	}
	cout<<count<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[N][N];
		nhap(a,n);
		tim(a,n); 
		--t;
	}
	return 0;
}
