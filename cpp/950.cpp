#include<bits/stdc++.h>
using namespace std;
int main() {
  string s,d;
  int t=49;
  cin>>s;
  for(int i=0;i<s.size();++i) {

	if(s[i]=='1') {
      d=t+'0';
      cout<<d;
      t=49;
    }
    if(s[i]=='0') {
      t++;
    }
  }
}
      
