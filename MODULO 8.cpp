#include<bits/stdc++.h>

using namespace std;
long long handless(long long b,long long p){ 
    long long count=0; 
    for(int x=1;x<p;x++){
        if(((x%p)*(x%p))%p==1){
            long long tmp=x+p*(b/p); 
            if(tmp>b){
                tmp-=p;
        	}
            count+=((tmp-x)/p+1);
        } 
    } 
    return count; 
} 
int main(){
	int t;
	cin>>t;
	while(t>0){
		long long b,p;
		cin>>b>>p;
		cout<<handless(b,p)<<endl;
		--t;
	}	
	return 0;
}
