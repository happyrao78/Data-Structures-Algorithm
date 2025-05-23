#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
    //space
    for(int s=0;s<n-i-1;s++){
        cout<<" ";
    }
     //stars
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
    }
     //space
    for(int s=0;s<n-i-1;s++){
        cout<<" ";
    }
    cout<<endl;
}
    for(int i=0;i<n;i++){
    //space
    for(int s=0;s<i;s++){
        cout<<" ";
    }
    //star
    for(int j=0;j<2*n-(2*i+1);j++){
        cout<<"*";
    }
    //space
    for(int s=0;s<i;s++){
        cout<<" ";
    }
    cout<<endl;
    }
    

    return 0;
}