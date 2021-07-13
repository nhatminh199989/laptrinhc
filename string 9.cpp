#include<bits/stdc++.h>

using namespace std;
void sum(string s){
	int sum=0;
	int sum1=0;
	for(int i=0;i<s.size();++i){
		if(s[i]>=48&&s[i]<=57){
			sum1=sum1*10+(s[i]-'0');
		}
		else{
			if(sum<sum1){
				sum=sum1;
			}
			sum1=0;
		}	
	}
	if(sum<sum1){
		sum=sum1;
	}
	cout<<sum<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string s;
		cin>>s;
		sum(s);
		--t;
	}
	return 0;
}
