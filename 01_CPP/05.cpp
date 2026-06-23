#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;

    /*DEREFERENCING OF A POINTER
    Using an asterisk again after the creation of a pointer it will return the value of the
    variable at the address.
    Also never leave your pointer uninitialized, always point to some address or point it to null.
    */

    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*ptr+1<<endl;
    return 0;


}