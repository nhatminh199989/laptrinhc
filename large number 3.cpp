#include<bits/stdc++.h>

using namespace std;
void handless(string s1,string s2){
	int len1=s1.size();
	int len2=s2.size();
	int len=len1+len2;
	vector<int> a,b;
	for(int i=0;i<len1;i++){
		a.push_back(int(s1[i]-'0'));
	}
	for(int i=0;i<len2;i++){
		b.push_back(int(s2[i]-'0'));
	}
	vector<vector<int> >res(len2);
	int index=0;
	for(int i=len2-1;i>=0;i--){
		int carry=0,tmp=0;
		int t=0;
		while(t<index){
			res[index].push_back(0);
			t++;
		}
		for(int j=len1-1;j>=0;j--){
			tmp=a[j]*b[i]+carry;
			res[index].push_back(tmp%10);
			carry=tmp/10;
		}
		if(carry>0){
			res[index].push_back(carry);
		}
		while(res[index].size()<len){
			res[index].push_back(0);
		}
		reverse(res[index].begin(),res[index].end());
		index++;
	}
	int carry=0;
	string ans="";
	for(int j=res[0].size()-1;j>=0;j--){
		int tmp=carry;
		for(int i=0;i<res.size();i++){
			tmp+=res[i][j];
		}
		ans=char(tmp%10+'0')+ans;
		carry=tmp/10;
	}
	if(carry>0){
		ans=char(carry+'0')+ans;
	}
	int count=0;
	while(ans[0]=='0'){
	    ans.erase(ans.begin());
	    count++;
	}
	if(count==len){
		ans='0';
	}  
	cout<<ans<<endl;
}
int main()
{
	
	int t;
	cin>>t;
	while(t>0){
	    string s1,s2;
	    cin>>s1>>s2;
	    handless(s1,s2);
	    --t;
	}
	return 0;
}
