#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int spaces=2*n-2; //spaces differ by a factor of  2
    for(int i=1;i<=2*n-1;i++){
        //stars
        int stars =i;
        if(i > n) stars=2*n-i; //decreasing stars after n/2
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        //spaces
        for(int s=1;s<=spaces;s++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i < n) spaces-=2;
        else spaces+=2;
    }
    return 0;
}