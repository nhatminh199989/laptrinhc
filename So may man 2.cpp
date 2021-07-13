#include<bits/stdc++.h>

using namespace std;
void phantich(int &sum){
	int temp=0;
	while(sum>0){
		temp+=sum%10;
		sum/=10;
	}
	sum=temp;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string s;
		cin>>s;
		int sum=0;
		for(int i=0;i<s.size();++i){
			sum+=(s[i]-'0');
		}
		while(sum>9){
			phantich(sum);
		}
		if(sum==9){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		cout<<endl;
		--t;
	}
}
