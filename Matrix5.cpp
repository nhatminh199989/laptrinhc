#include<bits/stdc++.h>

using namespace std;
void nhap(int a[100][100],int n){
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>a[i][j];
		}
	}
}
int maxhang(int a[100][100],int n){
	int sum=0;
	for(int i=0;i<n;++i){
		int temp=0;
		for(int j=0;j<n;++j){
			temp+=a[i][j];
		}
		if(temp>sum){
			sum=temp;
		}
	}
	return sum;
}
int maxcot(int a[100][100],int n){
	int sum=0;
	for(int j=0;j<n;++j){
		int temp=0;
		for(int i=0;i<n;++i){
			temp+=a[i][j];
		}
		if(temp>sum){
			sum=temp;
		}
	}
	return sum;
}
int demhang(int a[100][100],int n,int maxh){
	int dem=0;
	for(int i=0;i<n;++i){
		int sum=0;
		for(int j=0;j<n;++j){
			sum+=a[i][j];
		}
		dem+=maxh-sum;
	}
	return dem;
}
int demcot(int a[100][100],int n,int maxc){
	int dem1=0;
	for(int j=0;j<n;++j){
		int sum=0;
		for(int i=0;i<n;++i){
			sum+=a[i][j];
		}
		dem1+=maxc-sum;
	}
	return dem1;
}
void count(int a[100][100],int n){
	int maxh=maxhang(a,n);
	int maxc=maxcot(a,n);
	if(maxh>maxc){
		cout<<demhang(a,n,maxh)<<endl;
	}
	else{
		cout<<demcot(a,n,maxc)<<endl;
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[100][100];
		nhap(a,n);
		count(a,n);
		--t;
	}
	return 0;
}
