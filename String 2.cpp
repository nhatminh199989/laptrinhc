#include<bits/stdc++.h>

using namespace std;
void check(string s){
	int sum1=0,sum2=0;
	string s1;
	for(int i=0;i<s.size();++i){
		s1.push_back(s[i]);
		if(i%2==0){
			sum1+=atoi(s1.c_str());
		}
		else{
			sum2+=atoi(s1.c_str());
		}
		s1.erase(0);
	}
	if((sum1-sum2)%11==0){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	cout<<endl;
}
int main(){
	short t;
	cin>>t;
	cin.ignore();
	while(t>0){
		string s;
		getline(cin,s);
		check(s);
		--t;
	}
	return 0;
}
