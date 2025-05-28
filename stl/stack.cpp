// lifo and majorly push, pop, top
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(7);
    st.push(9);
    st.push(1);
    cout<<st.top(); // 1
    cout<<st.size(); //5
    st.emplace(4);
    st.top(); // 4
    st.empty(); // stack is emptied now 
    st.pop(); // removes 4
    return 0;
}