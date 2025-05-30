#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;

    // TC=O(sqrt(n)) best TC 
    int count=0;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            count++;
            if((x/i)!=i){
                count++;
            }
        }
    }
    if(count==2){
        cout<<"prime";
    }
    else cout<<"not prime";
    return 0;
}