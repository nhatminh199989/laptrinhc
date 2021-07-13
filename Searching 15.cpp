#include<bits/stdc++.h>

using namespace std;
void handless(){
    int n;
    vector<int>res,a;
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	int k,x;
    cin>>k>>x;
    int l=lower_bound(a.begin(),a.end(),x)-a.begin();
    int r=upper_bound(a.begin(),a.end(),x)-a.begin();
    while(r<n&&a[r]==x){
        r++;
    }
    while(l>=0&&a[l]==x){
        l--;
    } 
    while(k>0){
        if(l>=0){
            res.push_back(a[l]);
            l--;
            k--;
        }
        if(r<n){
            res.push_back(a[r]);
            r++;
            k--;
        }
        if(l<0&&r>=n){
        	break;
		} 
    }
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
    	cout<<res[i]<<" ";
	}
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
  	  	handless();
		--t;	
	}
	return 0;
}
