#include<bits/stdc++.h>

using namespace std;
void find(string s1,string s2){
	int min=150,a,b;
	for(int i=0;i<s1.size();++i){
		string temp=s2;
		for(int j=i;j<s1.size();++j){
			for(int k=0;k<temp.size();++k){
				if(temp[k]==s1[j]){
					temp.erase(k,1);
					break;
				}
			}
			if(temp.empty()==1){
				if(j-i+1<min){
					min=j-i+1;
					a=i;
					b=j;
				}
				break;
			}
		}
	}
	if(min==150){
		cout<<"-1";
	}
	else{
		for(int i=a;i<=b;++i){
			cout<<s1[i];
		}
	}
	cout<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string s1,s2;
		cin>>s1>>s2;
		find(s1,s2);
		--t;
	}
}
