/*
Write a function to find the longest common prefix string amongst an array of strings. 
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string commo_str;
        if(strs.size()==0) return commo_str;
        
        for(int i = 0; i < strs[0].size() ;i++)
        {      
            for(int j = 0 ; j < strs.size() ; j++)
            {
                if(strs[0][i] != strs[j][i])
                    return commo_str;
            }
            commo_str.push_back(strs[0][i]) ;
        }
        return commo_str;
    }
};
