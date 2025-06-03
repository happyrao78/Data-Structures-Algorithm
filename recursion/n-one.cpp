#include<bits/stdc++.h>
using namespace std;
void call(int n, int i){
    if(n<1) return;
    cout<<n;
    call(n-1,i);
}
int main(){
    int n;
    cin>>n;
    call(n,n); //5,5 goes then 4,5->3,5->2,5->1,5->0,5
    return 0;
}