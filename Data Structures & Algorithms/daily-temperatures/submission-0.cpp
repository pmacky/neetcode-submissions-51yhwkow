class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>stac;
        vector<int>res(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            int t=temperatures[i];
            while(!stac.empty()&&t>stac.top().first){
                auto pai = stac.top();
                stac.pop();
                res[pai.second]=i-pai.second;
            }
            stac.push({t,i});
        }
        return res;
    }
};
