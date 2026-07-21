class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>ss;
        unordered_map<char,int>tt;
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i < s.length(); i++){
            ss[s[i]] += 1;
        }


        for(int i = 0; i < t.length();i++){
            tt[t[i]]+= 1;
        }
        return ss == tt;
    }
};
