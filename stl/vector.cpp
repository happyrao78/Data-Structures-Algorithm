#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(1); //stores 1
    v1.emplace_back(3); // doesnt create copy same as push back either way

    // multiple values addition via emplace back and push back
    vector<pair<int,int>> vector_paired;
    vector_paired.push_back({4,5});
    vector_paired.emplace_back(7,8); // directly stores without making any copy just syntax difference

    vector<int> v2(6,10); // prints 10 6 times
    vector<int> v3(5); // prints 5 garbage values
    vector<int> v4(v2); //v2 vector is copied in v4

    // printing the values inside the vector with help of iterators
    //first way
    vector<int>::iterator it = v2.begin();
    it++;
    cout<< *(it)<<" "; // * eslie use kia kyuki iterator memory address ko point kta haiand hum khali it likhege to wo memory address print krega

    it +=2;
    vector<int>::iterator it = v2.end(); // last number ke end ko point krega and hume ek value piche lake fir start krna hoga prinitng ke liye

    // vector<int>::iterator it = v2.rend();
    // vector<int>::iterator it = v2.rbegin(); esme shi chlega inside hi just opposite h bs

    //accessing value ke liye same as array v[0] or v.at(0)

    //accesing via loop
    for(vector<int>::iterator it=v2.begin();it!=v2.end();it++){
        cout<<*(it)<<" "; //prints all values of vector
    }

    for(auto it=v2.begin();it!=v2.end();it++){
        cout<<*(it)<<" "; //prints all values of vector
    }
    
    for(auto it:v2){
        cout<<it<<" "; //most simplest way to access values via iterator
    }

    //deleting the values in vector
    // [10,20,30,40,50]
    v2.erase(v2.begin()+3); //[10,20,30,50];

    //[start(incl), end(non-incl.)) erase takes two params also for erasing multiple values
     // [10,20,30,40,50]
    v2.erase(v2.begin()+1,v2.begin()+4); //[10,50];

    //inserting values in vector
    vector<int> x(2,100); //[100,100]
    x.insert(x.begin(),3); //[3,100,100]
    x.insert(x.begin(),4,80); //[80,80,80,80,3,100,100]
    vector<int> copy(2,50); //[2,50]
    x.insert(x.begin(),copy.begin(),copy.end()); //[2,50,80,80,80,80,3,100,100]

    x.size(); //prints size of vector
    x.pop_back(); //last me se hta dega value

    v1.swap(v2); //swap hojege vectors
    x.clear(); //empties the vector completely


    return 0;
}