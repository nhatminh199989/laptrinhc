#include<bits/stdc++.h>

using namespace std;
bool isSmaller(string str1, string str2){
    int n1 = str1.length(), n2 = str2.length();
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
    return false;
}
void hieu(string X,string Y){
	 if (isSmaller(X,Y))
        swap(X,Y);
	string Z="";
	int c=0;
	reverse(X.begin(),X.end());
	reverse(Y.begin(),Y.end());
	for(int j=0;j<Y.size();++j){
		int d=((X[j]-'0')-(Y[j]-'0')-c);
		if(d<0){
			d+=10;
			c=1;
		}
		else{
			c=0;
		}
		Z.push_back(d+'0');
	}
	for(int j=Y.size();j<X.size();++j){
		int d=((X[j]-'0')-c);
		if(d<0){
			d+=10;
			c=1;
		}
		else{
			c=0;
		}
		Z.push_back(d+'0');
	}
	reverse(Z.begin(),Z.end());
	cout<<Z;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string X,Y;
		cin>>X>>Y;
		hieu(X,Y);
		cout<<endl;
		--t;
	}
	return 0;
}
