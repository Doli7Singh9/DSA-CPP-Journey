class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        
        unordered_map<int, int> mp;
        //first loop is for counting the frequncy
        for(int x : nums){
            mp[x]++;
        }

        //second loop is for finding the max frequency
        int maxfreq = 0;
        for(auto it : mp ){
            maxfreq = max(maxfreq , it.second) ;   
        }
        
        //third loop is about sum of frequncies
        int result = 0;
        for(auto it : mp){
            if(it.second == maxfreq){
                result += it.second;
            }
        }
        return result;
    }   
};