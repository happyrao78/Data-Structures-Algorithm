#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int s=0;s<n-i-1;s++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }
        for(int s=0;s<n-i-1;s++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}