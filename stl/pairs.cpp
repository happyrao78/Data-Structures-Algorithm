#include<bits/stdc++.h>
using namespace std;
int main(){
    // agar ek varible me do values store krni h to hum pair ka use kr skte hai
    pair<int,int> a= {1,3};
    cout<<a.first<<a.second;// prints 1,3

    // agar suppose 3 values store krni hai ek varibale me to we can use nested pair
    pair<int, pair<int,int>> b={1,{2,3}};
    cout<<b.first<<b.second.first<<b.second.second; // prints 1,2,3

    // we can also use array data type in it
    pair<int,int> arr[]={{1,3},{4,5},{6,7}};
    cout<<arr[2].second; // prints 7
    return 0;
}