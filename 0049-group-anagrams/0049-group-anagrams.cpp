class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;
        for(int i=0; i < strs.size(); i++){
            string word = strs[i]; //eat
            string key = word;   

            sort(key.begin(),key.end());  //aet

            mp[key].push_back(word); //word - aet


        }

        vector<vector<string>> ans;
        
        for(auto it : mp){   //it - it.first - key and it.second - value 
        ans.push_back(it.second);
            

        }
    return ans;    
    }
};