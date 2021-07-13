#include<bits/stdc++.h>

using namespace std;

int main(){
	short t;
	cin>>t;
	while(t>0){
		string s;
		cin>>s;
		int a[100000];
		int count=0,sum=0;
		for(int i=0;i<s.size();++i){
			if(s[i]!='0'){
				int temp=1;
				for(int j=i+1;j<s.size();++j){
					if(s[i]==s[j]){
						++temp;
						s[j]='0';
					}
				}
				sum+=temp;
				a[count++]=temp;
			}
		}
		int check=1;
		for(int i=0;i<count;++i){
			if(a[i]-1>sum-a[i]){
				check=0;
			}
		}
		if(check==1){
			cout<<"1";
		}
		else{
			cout<<"-1";
		}
		cout<<endl;
		--t;
	}
	return 0;
}
