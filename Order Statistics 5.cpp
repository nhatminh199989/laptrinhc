#include<bits/stdc++.h>

using namespace std;
void nhap(int a[100000],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
void tim(int a[100000],int n){
	int h=-100000,sum=0,count=0;
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(a[j]>a[i]){
				++count;
				sum=a[j]-a[i];
				if(sum>h){
					h=sum;
				}
			}
		}
	}
	if(count==0){
		cout<<"-1";
	}
	else{
		cout<<h;
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		int *a=new int[100000];
		cin>>n;
		nhap(a,n);
		tim(a,n);
		cout<<endl;
		delete[]a;
		--t;
	}
	return 0;
}
