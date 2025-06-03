#include<bits/stdc++.h>
using namespace std;

int add(int n){
    if(n==0) return 0;
    return n + add( n-1);
}

int add2(int n, int sum){
    if(n < 1){
        cout<<sum;
        return 0;
    }
    add2(n-1,sum+n);
}
int main(){
    int  n;
    cin>>n;
    int res=add(n);
    cout<<res;
    add2(5,0);
    return 0;
}