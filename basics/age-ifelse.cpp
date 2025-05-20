#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"enter age:"<<endl;
    cin>>age;
    if(age <18){
        cout<<"not eligible";
    }
    else if(age <= 54){
        cout<<"eligible for job";
    }
    else if(age <=57){
        cout<<"eligible for job , retirement soon";
    }
    else{
        cout<<"retirement time daddu";
    }

    return 0;
}