#include <iostream>
using namespace std;


void printNum(int n){
    if(n<=10){
        // cout<<n<<endl;
        printNum(n+1);
        cout<<n<<endl;
    }
}

int main(){
    printNum(1);
}
