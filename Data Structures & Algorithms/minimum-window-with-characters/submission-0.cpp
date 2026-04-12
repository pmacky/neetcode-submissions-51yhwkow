class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty()){
            return "";
        }
        unordered_map<char,int>counT,window;
        for(char c:t){
            counT[c]++;
        }
        int need=counT.size();
        int have=0;
        int reslen=INT_MAX;
        pair<int,int>res={-1,-1};
        int l=0;
        for(int r=0;r<s.length();r++){
            window[s[r]]++;
            if(counT.count(s[r]) && window[s[r]]==counT[s[r]]){
                have++;
            }
            while(have==need){
                if((r-l+1)<reslen){
                    reslen=r-l+1;
                    res={l,r};
                }
                window[s[l]]--;
                if(counT.count(s[l]) && window[s[l]]<counT[s[l]]){
                    have--;
                }
                l++;
            }
        }
        return reslen==INT_MAX ? "":s.substr(res.first,reslen);
    }
};
