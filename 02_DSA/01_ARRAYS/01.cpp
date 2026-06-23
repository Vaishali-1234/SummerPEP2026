#include <iostream>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int i = 0;
        int j = arr.size() - 1;
        while(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        
    }
};

int main(){

    int arr[5] = {1,2,3,4,5};
    for(int i =0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }


    return 0;
}