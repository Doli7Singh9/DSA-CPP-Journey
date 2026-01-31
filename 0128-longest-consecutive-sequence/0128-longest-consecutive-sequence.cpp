class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        
        for (int num : numSet) {
            // Start new sequence only if no predecessor exists
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentLength = 1;
                
                // Extend sequence forward
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    currentLength++;
                }
                
                longest = max(longest, currentLength);
            }
        }
        
        return longest;
    }
};
