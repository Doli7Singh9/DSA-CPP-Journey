class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // 1. Create an unordered_set (it's like a hash map but only keys)
        unordered_set<int> seen;

        // 2. Loop through every number in the vector
        for (int num : nums) {
            // 3. Check if the number is already in our set
            if (seen.count(num)) {
                return true; // We found a duplicate!
            }
            // 4. If not, add it to the set for next time
            seen.insert(num);
        }

        return false; // No duplicates found
        // re-uploading to github
    }
};