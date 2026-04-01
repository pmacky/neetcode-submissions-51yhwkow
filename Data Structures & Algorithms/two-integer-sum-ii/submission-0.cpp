class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0,end=size(numbers)-1;
        while(start<end){
            int sum=numbers[start]+numbers[end];
            if(sum==target){
                return {start+1,end+1};
            }
            else if(sum<target){
                start++;
            }
            else{
                end--;
            }
        }
        return {0,0};
    }
};
