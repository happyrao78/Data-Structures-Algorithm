#include<bits/stdc++.h>
using namespace std;

void call(int i, int n){
    if(i <1) return;
    call(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    call(n,n); //123456
    return 0;
}