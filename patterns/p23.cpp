#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int start=1;
        int bp=i;
        //space
        for(int s=0;s<n-i-1;s++){
            cout<<" ";
        }
        //numbers
        for(int j=0;j<2*i+1;j++){
            cout<<start;
            if(j<bp) start++;
            else  start--;
        }
        //space
        
        for(int s=0;s<n-i-1;s++){
            cout<<" ";

        }
        cout<<endl;
        

    }
    return 0;
}