#include<bits/stdc++.h>

using namespace std;
void numbermin(int m,int s){
	int a=9*m-9,i=1;
	while(m>0){
		if(s-i<=a){
			cout<<i;
			s-=i;
			i=0;
			--m;
			a-=9;
		}
		else{
			++i;
		}
	}
	cout<<" ";
}
void numbermax(int m,int s){
	int a=9;
	while(m>0){
		if(s-a>=0){
			cout<<a;
			s-=a;
			--m;
			a=9;
		}
		else{
			--a;
		}
	}
}
int main(){
	int m,s;
	cin>>m>>s;
	if(s==0&&m>1){
		cout<<"-1 -1";
	}
	else if(9*m<s){
		cout<<"-1 -1";
	}
	else{
		numbermin(m,s);
		numbermax(m,s);
	}
	cout<<endl;
	return 0;
}
