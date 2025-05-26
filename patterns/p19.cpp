#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int space=0;
    for(int i=0;i<n;i++){
        
        //star
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        //space
        for(int j=0;j<space;j++){
            cout<<"  ";
        }
        //star
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        space+=2;
        cout<<endl;
    }
    space=2*n-2;
    for(int i=1;i<=n;i++){ //start from 1 as if we will take zero then the symmetry will break in it.
        
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        for(int j=0;j<space;j++){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        space -=2;
        cout<<endl;
        
    }
    return 0;
}