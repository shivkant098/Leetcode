class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // brute force solution 
        vector<int>pos(2);
        pos[0]=-1;
        pos[1]=-1;
        int n=nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]==target){
                 pos[0]=i;
                break;
                
            }
        }
         for(int i =n-1;i>=0;i--){
            if(nums[i]==target){
                 pos[1]=i;
                break;
    }
         }
             return pos;
    }
};