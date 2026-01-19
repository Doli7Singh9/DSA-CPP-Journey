class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.size() == 0){ //first always check if string is empty or not
            return "";
        }

        sort(strs.begin(), strs.end());// lexicographically it will sort

        string first = strs[0];
        string last = strs[strs.size() - 1];

        //check the minimum length because common prefix in astring = commmon in first and last and also it will reducehte number of loop

        int len = min(first.length(), last.length());

        string ans= "";

        //now compare character by character

        for(int i = 0; i < len; i++){
            if (first[i] == last[i]){
                ans.push_back(first[i]);

            }
            else{
                break;
            }
            
        }
     return ans;   
    }
};