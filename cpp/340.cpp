#include<bits/stdc++.h>
using namespace std;
#define ilya_lox for(int i=0;i<3;++i)
int main() {
    int x[3],y[3],l=0,m=0;
    ilya_lox {
        cin>>x[i];
    }
    ilya_lox {
        cin>>y[i];
    }
    sort(x,x+3);
    sort(y,y+3);
    ilya_lox {
        if(x[i]>y[i]) {
            m++;
        }
        if(y[i]>x[i]) {
            l++;
        }
    }
    if(m==0 && l==0) {
        cout<<"Boxes are equal";
        return 0;
    }
    if(m>l && l==0) {
        cout<<"The first box is larger than the second one";
        return 0;
    }
    if(l>m && m==0) {
        cout<<"The first box is smaller than the second one";
        return 0;
    }
    cout<<"Boxes are incomparable";
}
