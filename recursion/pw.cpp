#include<bits/stdc++.h>
using namespace std;


//Write a program to calculate the sum of cubes from 1 to n, i.e., compute
//1³ + 2³ + 3³ + ... + n³ for a given input n.
int pow(int n){
    if(n==0){
        return 0;
    }
    return n*n*n + pow(n-1);
}
int main(){
    int n;
    cin>>n;
    int res=pow(n);
    cout<<res;
    return 0;
}