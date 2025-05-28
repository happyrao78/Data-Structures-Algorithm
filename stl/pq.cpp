#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(15);
    pq.push(6);
    pq.push(8);
    pq.top(); // 15 
    pq.pop(); // 8,6

    // minimum heap / minimum priority queue
    priority_queue<int,vector<int>,greater<int>> pqq;
    pqq.push(10);
    pqq.push(1);
    pqq.push(20);
    pqq.push(0);
    pqq.top(); // 0 
    // [0,1,10,20]
    return 0;
}