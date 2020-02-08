#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
string proizved(string a, char b) {
	string c;
	int t=0;
	for(int i=0;i<a.size();++i) {
		c.insert(i,1,(((a[i]-'0')*(b-'0')+t)%10)+'0');
		t=((a[i]-'0')*(b-'0')+t)/10;
		if(i==a.size()-1 && t!=0) {
			c.insert(i+1,1,t+'0');
		}
	}
	return c;
}
int main() {
	int a;
	string b="54";
	cin>>a;
	for(int i=0;i<a-1;++i) {
		b=proizved(b,'9');
		b=proizved(b,'5');
	}
	for(int i=b.size()-1;i>=0;--i)
		cout<<b[i];
}
