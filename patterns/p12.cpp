#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        
       //number
        for(int j=1;j<=i;j++){
            cout<<j;
            
        }
        //space
        for(int s=1;s<=space;s++){
            cout<<" ";
        }
        //number
        for(int j=i;j>=1;j--){
            cout<<j;
            
        }
        cout<<endl;
        space -=2;
    }
    return 0;
}