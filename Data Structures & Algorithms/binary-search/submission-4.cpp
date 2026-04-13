class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            int ind=l+(r-l)/2;
            if(nums[ind]==target){
                return ind;
            }
            else if(target>nums[ind]){
                l=ind+1;
            }
            else{
                r=ind-1;
            }
        }
        return -1;
    }
};
