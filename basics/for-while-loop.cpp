#include<bits/stdc++.h>
using namespace std;
int main(){
    // print table of 5
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<""<<n<<"*"<<""<<i<<"="<<""<<n*i<<endl;
    }
     int x;
    cout<<"enter the second number:"<<endl;
    cin>>x;
    int i=1;
    while(i<=10){
        cout<<""<<x<<"*"<<""<<i<<"="<<""<<x*i<<endl;
        i++;
    }
    return 0;
}