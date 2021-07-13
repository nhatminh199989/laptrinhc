#include<bits/stdc++.h>

using namespace std;
void nhap(int c[],int n){
	for(int i=0;i<n;++i){
		cin>>c[i];
	}
}
void tim(int a[],int b[],int n){
	int max=1,temp=1;
	for(int i=0;i<n;++i){
		int x=0,y=0;
		for(int j=i;j<n;++j){
			x+=a[j];
			y+=b[j];
			if(x==y){
				temp=j-i+1;
			}
			if(temp>max){
				max=temp;
			}
		}
	}
	cout<<max;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[n],b[n];
		nhap(a,n);
		nhap(b,n);
		tim(a,b,n);
		cout<<endl;
		--t;
	}
	return 0;
}
