class Solution {
public:
    bool isValid(string s) {
        stack<char>sta;
        unordered_map<char,char>closeToOpen={
            {')','('},
            {'}','{'},
            {']','['}
        };
        for(char c :s){
            if(closeToOpen.count(c)){
                if(!sta.empty() && sta.top()==closeToOpen[c]){
                    sta.pop();
                }
                else{
                    return false;
                }
            }
            else{
                sta.push(c);
            }
            

        }
        return sta.empty();
    }
};
