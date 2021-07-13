#include<bits/stdc++.h>

using namespace std;
void tim(vector<long long>a,vector<long long>b,vector<long long>c,int n1,int n2,int n3){
	int i=0,j=0,x=0;
	vector<int>d;
	while(i<n1&&j<n2){
		if(a[i]<b[j]){
			++i;
		}
		else if(a[i]>b[j]){
			++j;
		}
		else{
			x=1;
			d.push_back(a[i]);
			++j;
			++i;
		}
	}
	i=0,j=0;
	while(i<n3&&j<d.size()){
		if(c[i]<d[j]){
			++i;
		}
		else if(c[i]>d[j]){
			++j;
		}
		else{
			cout<<d[j]<<" ";
			++j;
			++i;
			x=2;
		}
	}
	if(x==0||x==1){
		cout<<"-1";
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		vector<long long>a;
		vector<long long>b;
		vector<long long>c;
			int g=0;
	for(int i=0;i<n1;++i){
		cin>>g;
		a.push_back(g);
	}
	for(int i=0;i<n2;++i){
		cin>>g;
		b.push_back(g);
	}
	for(int i=0;i<n3;++i){
		cin>>g;
		c.push_back(g);
	}
		tim(a,b,c,n1,n2,n3);
		cout<<endl;
		--t;
	}
	return 0;
}
