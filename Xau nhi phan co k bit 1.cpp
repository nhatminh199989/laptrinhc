#include<iostream>

using namespace std;
int n,k;
int a[20];
void xuat(){
	int count=0;
	for(int i=0;i<n;++i){
		if(a[i]==1){
			++count;
		}
	}
	if(count==k){
		for(int i=0;i<n;++i){
			cout<<a[i];
		}
		cout<<endl;
	}
}
void check(int &stop){
	int i=n;
	while(i>=0&&a[i]==1){
		--i;
	}
	if(i==-1){
		stop=0;
	}
	else{
		a[i]=1;
		for(int j=i+1;j<n;++j){
			a[j]=0;
		}
	}
}
void sinh(){
	int stop=1;
	while(stop==1){
		xuat();
		check(stop);
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		cin>>n>>k;
		for(int i=0;i<n;++i){
			a[i]=0;
		}
		sinh();
		--t;
	}
	return 0;
}
