class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int sec = -1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>largest){
                sec = largest;
                largest = arr[i];
            }else if(arr[i]<largest && arr[i]>sec){
                sec = arr[i];
            }
            
        }
        return sec;
    }
};

//SECOND LARGEST IN AN ARRAY