#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int org=n;
    int sum=0;
    while(n!=0){
        int ld=n%10;
        sum+=ld*ld*ld;
        n/=10;
    }
    if(org==sum){
        cout<<"armstrong"<<endl;
    }
    else cout<<"not armstrong"<<endl;
    return 0;
}