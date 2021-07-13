#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		vector<int>a;
		cin>>n;
		for(int i=0;i<n;++i){
			int n;
			cin>>n;
			a.push_back(n);
		}
		int i=0,j=0,b=0;
		while(i<a.size()/2){
			int m=a.size()-1;
			if(a[i]==a[m-b]){
				++i;
				++b;
			}
			else if(a[i]<a[m-b]){
				a[i]+=a[i+1];
				++j;
				int pos=i+1;
				vector<int>::iterator it=a.begin();
				advance(it,pos);
				a.erase(it);
			}
			else if(a[i]>a[m-b]){
				a[m-1-b]+=a[m-b];
				++j;
				int pos=m;
				vector<int>::iterator it=a.begin();
				advance(it,pos);
				a.erase(it);
			}
		}
		cout<<j<<endl;
		--t;
	}
	return 0;
}
