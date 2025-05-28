// fifo and majorly push, pop, top nd TC=O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(5);
    q.push(4);
    q.push(7);
    q.push(9);
    q.push(1);
   q.back(); // 1
   q.pop(); // removes first element 5
   q.front(); // prints 4
    return 0;
}