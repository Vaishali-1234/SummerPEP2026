#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vect1(3);
    vect1.push_back(10);
    vect1.push_back(20);
    vect1.push_back(30);
    for(int i : vect1){
        cout<<i<<" ";
    }



    // vect1.pop_back();
    // vect1.size();
    // vect1.clear();

}