#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"enter makrs:"<<endl;
    cin>>marks;
    if(marks < 25){
        cout<<"F";
    }
    else if(marks <= 44){
        cout<<"E";
    }
    else if(marks <=49){
        cout<<"D";
    }
    else if(marks <=60){
        cout<<"C";
    }
    else if(marks <=80){
        cout<<"B";
    }
    else if(marks <=90){
        cout<<"A";
    }
    else if(marks <=100){
        cout<<"O";
    }
    return 0;
}