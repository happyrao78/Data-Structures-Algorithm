#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> ls;
    ls.push_back(5);
    // it is similar to vectors bas esme na push-front ka option hota h jo vectors me ni hota and ye insert se better rhta h kyuki insert me cost lgti h jada add krne me wo heavier hai time complexity me. rest all functions are same
    deque<int> dq;
    dq.push_back(4);
    dq.emplace_back(4,7);
    dq.emplace_front(8,0);
    // isme bhi sb same hai deque me like list and vectors functions
    return 0;
}