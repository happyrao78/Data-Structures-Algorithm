#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="my name is \"happy\"";
    cout<<s<<endl;
    int start=0;
    while(s[start] !='\0'){
        start++;
    }
    cout<<"size:"<<start<<endl;
    return 0;
}