#include<bits/stdc++.h>

using namespace std;
bool chiahet(int a[],int n,int dem){
	int temp=0;
	for(int i=0;i<=dem;++i){
		temp=((temp*10+a[i])%n);
	}
	if(temp==0){
		return true;
	}
	else{
		return false;
	}
}
void sinh(int a[],int &dem){
	int i=dem;
	while(i>=0&&a[i]==9){
		--i;
	}
	if(i==-1){
		++dem;
		for(int j=i+2;j<=dem;++j){
			a[j]=0;
		}
	}
	else{
		a[i]=9;
		for(int j=i+1;j<=dem;++j){
			a[j]=0;
		}
	}
}
void lap(int a[],int n,int dem){
	while(1){
		if(chiahet(a,n,dem)==true){
			for(int i=0;i<=dem;++i){
				cout<<a[i];
			}
			cout<<endl;
			break;
		}
		else{
			sinh(a,dem);
		}
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,dem=0;
		cin>>n;
		int a[100000];
		a[0]=9;
		lap(a,n,dem);
		--t;
	}
	return 0;
}
