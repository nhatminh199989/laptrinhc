#include<bits/stdc++.h>

using namespace std;
int NT(int i){
	int count=0;
	for(int j=2;j<=sqrt(i);++j){
		if(i%j==0){
			++count;
		}
	}
	return count;
}
int main(){
	int a,b;
	cin>>a>>b;
	if(a>b){
		swap(a,b);
	}
	for(int i=a+1;i<b;++i){
		if(NT(i)==0){
			cout<<i<<" ";
		}
	}
return 0;
}
