class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int current =0;
        int count=0;
        for(int i=0;i<k;i++){
            current+=arr[i];
        }{
            if((current/k)>=threshold){
                count++;
            }
        }
        
        for(int i=1;i<=arr.size()-k;i++){
            
            current=(current-arr[i-1]+arr[i+k-1]);
            if((current/k)>=threshold){
                count++;
            }
            
        }
        return count;
    }
};