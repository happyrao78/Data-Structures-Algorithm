#include<bits/stdc++.h>
using namespace std;

// arrays are always passed by reference in functions
int changearr(int arr[], int n){
    arr[0]=100;
    cout<<"inside function arr[0]:"<<arr[0];
    return 0;
}
// int main(){
//     int n;
//     cout<<"enter size:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout<<"enter numbers";
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     changearr(arr,n);
//     cout<<"arr[0] inside int main:"<<arr[0];
//     return 0;
// }

int changenumbers(int &n){
    n+=10;
    cout<<"n value in funtion :"<<n;
    return 0;
}

int main(){
int a;
cout<<"enter a:";
cin>>a;
changenumbers(a);
cout<<"value of a in int main function:"<<a; //oassed by reference so original value will be passed not the copy of number
}