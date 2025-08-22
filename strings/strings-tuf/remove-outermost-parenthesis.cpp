/*
- decomposition of string means that every opening parethesis has a corresposnding closing parenthesis. 
- in this question we have to find the decompositions and then remove the outer parenthesis and then return the parenthesis that remains over.
#### approach-1 ####
stack based approach- brute force
-tc=o(n),sc=o(n)
if st.empty(): then add to stack but dont add to answer
if !st.empty(): then add to stack but also add to answer
at last return the answer

#### approach-2 ####
- counter approach: check before the opening bracket counter==0 and check after the closing bracket that counter==0 because in opening bracket we do +1 and in closing bracket we do -1 in counter.
- tc=o(n), sc=o(1); optimal solution
*/

#include<bits/stdc++.h>
using namespace std;
string removeouterparenthesis(string s){
    string res=""; // empty string
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==')') cnt--;
        if(cnt!=0) res.push_back(s[i]);
        if(s[i]=='(') cnt++;
    }
    return res;
}
int main(){
    string s="(()())";
    cout<<removeouterparenthesis(s);
    return 0;
}