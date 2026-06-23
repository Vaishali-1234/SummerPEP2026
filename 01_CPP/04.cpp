#include <iostream>
using namespace std;

void doublePassbyValue(int num){
    num *=2;
    cout<<"inside the function(pass by value): "<<num<<endl;
}

void doublePassbyreference(int &num){
    num *=2;
    cout<<"inside the function(pass by reference): "<<num<<endl;
}

int main(){
    
    // int a=10;
    // int &b=a;          //b and a are same here
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<b<<endl;

    int num = 10;
    doublePassbyValue(num);
    cout<<"Outside the function(pass by value): "<<num<<endl;

    doublePassbyreference(num);
    cout<<"Outside the function(pass by reference): "<<num<<endl;

    return 0;
}