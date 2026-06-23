#include <iostream>
using namespace std;

int main(){
    char grade='A';
    switch(grade){
        case 'A':
        cout<<"Excellent";
        break;
        case 'B':
        cout<<"Good";
        break;
        case 'c':
        cout<<"Average";
        break;          //important
        default:
        cout<<"Invalid";
        break;          //not mandatory

    //TENARY OPERATOR

        int age=25;
        string result = ((age>=18)?"Valid":"Invalid");
        cout<<result<<endl;
    }
}