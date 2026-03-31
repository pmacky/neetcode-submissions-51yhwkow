class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>times;
        vector<vector<int>>freq(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            times[nums[i]]++;
        }
        for(auto& pari:times){
            freq[pari.second].push_back(pari.first);
        }
        vector<int> result;
        for(int i=freq.size()-1;i>0;i--){
            for(int n :freq[i]){
                result.push_back(n);
                if(result.size()==k){
                    return result;
                }
            }
        }
        return result;
    }
};
