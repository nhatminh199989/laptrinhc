#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	cin.ignore();
	while(t>0){
		string s1,s2,s3[200],s4[200];
		int n=0,m=0;
		getline(cin,s1);
		getline(cin,s2);
		stringstream ss2(s2);
		string token;
		while(getline(ss2,token,' ')){
			s4[n++]=token;
		}
		token.clear();
		stringstream ss1(s1);
		while(getline(ss1,token,' ')){
			s3[m++]=token;
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				if(s4[i]==s3[j]){
					s3[j]="-1";
				}
			}
		}
		sort(s3,s3+m);
		for(int i=0;i<m-1;++i){
			if(s3[i]==s3[i+1]){
				s3[i]="-1";
			}
		}
		for(int i=0;i<m;++i){
			if(s3[i]!="-1"){
				cout<<s3[i]<<" ";
			}
		}
		cout<<endl;
		--t;
	}
	return 0;
}
