#include<bits/stdc++.h>
using namespace std;
/*
problem faced is ki agar ek array me hume multiple types of values store krani hai for eg : int, char, float, string etc. to uske liye hume new new arrays create krne pdege but templates solve this problem by providng a generic solution.
*/

//normal class
class one{
    int *arr;
    int size;
    one(int size,int *arr[]){
        this->size=size;
        arr[size];

    }
};

//simple template class which can be used for any type of values to be stored
template <class t>
class two{
    t num;
    public:
    two(t num){
        this->num=num;
        cout<<"dynamic data:"<<num<<endl;
    }
};

//template with paramters
template <class t1,class t2>
class three{
    t1 num1;
    t2 num2;
    public:
    three(t1 num1,t2 num2){
        this->num1=num1;
        this->num2=num2;
        cout<<"dynamic data 1:"<<num1<<endl;
        cout<<"dynamic data 2:"<<num2<<endl;
        cout<<"-----------"<<endl;
    }
};

//templates with default parameters already
template <class t1=int,class t2=bool>
class four{
    t1 num1;
    t2 num2;
    public:
    four(t1 num1,t2 num2){
        this->num1=num1;
        this->num2=num2;
        cout<<"dynamic data 1:"<<num1<<endl;
        cout<<"dynamic data 2:"<<num2<<endl;
        cout<<"-----------"<<endl;
    }
};
//functional templates
template <class x>
void swapp(x a, x b){  //swapping without using third variable and with pass by value jisme original value ki copy jati hai 
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swap a:"<<a<<endl;
    cout<<"after swap b:"<<b<<endl;

}
int main(){
    // two<int> number(5);
    // two<char> character('H');
    // two<string> sentence("Hey i am happy yadav!!!");
    // two<float> decimal(7.888);

    // three<long long int,char> obj1(2310997091,'H');
    // three<float,char> obj2(23.877,'H');
    // three<string,char> obj3("Happy yadav is my name",'H');
    // three<char,bool> obj4('H',true);

    // four<> obj1(56,true);
    // four<string,string> obj2("hello","happy");
    char a='a';
    char b='u';
    cout<<"before swap a:"<<a<<endl;
    cout<<"before swap b:"<<b<<endl;
    swapp(a,b);
    
    return 0;
}