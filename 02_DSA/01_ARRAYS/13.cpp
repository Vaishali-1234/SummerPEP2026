class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size(); i++){
            int j = i+1;
            int k = arr.size()-1;
            while(j<k){
                if(arr[i]+arr[j]+arr[k]==target){
                    return true;
                }else if(arr[i]+arr[j]+arr[k]>target){
                    k--;
                }else{
                    j++;
                }
                
            }
        }
        return false;
    }
};

//Triplet Sum in Array
