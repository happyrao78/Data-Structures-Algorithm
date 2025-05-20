#include<bits/stdc++.h>
using namespace std;

int maxx(int num1,int num2){
    if(num1>num2) return num1;

    return num2;
}
int main(){
    int x,y;
    cin>>x>>y;
    int res = maxx(x,y);
    cout<<res;
    return 0;
}