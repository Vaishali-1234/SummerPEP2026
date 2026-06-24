#include <iostream>
using namespace std;

int linearSearch(int arr[],int key,int n){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            if(key>10){
                return key*2;
            }else{
                return key/2;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {3,5,1,12,36,32,4};
    int key = 12;
    cout<<linearSearch(arr,key,7)<<endl;
    return 0;
}

//LINEAR SEARCH
