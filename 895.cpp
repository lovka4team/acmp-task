#include<bits/stdc++.h>
using namespace std;
#define ilya_loh for(int i=0;i<3;++i)
int main() {
	vector<string> ilya;
	ilya_loh {
		string s;
		cin>>s;
		ilya.push_back(s);
	}
	if((ilya[0][0]=='X' && ilya[1][0]=='X' && ilya[2][0]=='X') || (ilya[0][1]=='X' && ilya[1][1]=='X' && ilya[2][1]=='X') || (ilya[0][2]=='X' && ilya[1][2]=='X' && ilya[2][2]=='X')) {
		cout<<"Win";
		return 0;
	}
	if((ilya[0][0]=='X' && ilya[0][1]=='X' && ilya[0][2]=='X') || (ilya[1][0]=='X' && ilya[1][1]=='X' && ilya[1][2]=='X') || (ilya[2][0]=='X' && ilya[2][1]=='X' && ilya[2][2]=='X')) {
		cout<<"Win";
		return 0;
	}
	if((ilya[0][0]=='X' && ilya[1][1]=='X' && ilya[2][2]=='X') || (ilya[0][2]=='X' && ilya[1][1]=='X' && ilya[2][0]=='X')) {
		cout<<"Win";
		return 0;
	}
	if((ilya[0][0]=='O' && ilya[1][0]=='O' && ilya[2][0]=='O') || (ilya[0][1]=='O' && ilya[1][1]=='O' && ilya[2][1]=='O') || (ilya[0][2]=='O' && ilya[1][2]=='O' && ilya[2][2]=='O')) {
		cout<<"Lose";
		return 0;
	}
	if((ilya[0][0]=='O' && ilya[0][1]=='O' && ilya[0][2]=='O') || (ilya[1][0]=='O' && ilya[1][1]=='O' && ilya[1][2]=='O') || (ilya[2][0]=='O' && ilya[2][1]=='O' && ilya[2][2]=='O')) {
		cout<<"Lose";
		return 0;
	}
	if((ilya[0][0]=='O' && ilya[1][1]=='O' && ilya[2][2]=='O') || (ilya[0][2]=='O' && ilya[1][1]=='O' && ilya[2][0]=='O')) {
		cout<<"Lose";
		return 0;
	}
	cout<<"Draw";
}
