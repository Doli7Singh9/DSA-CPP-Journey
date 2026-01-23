class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;                 // start
        int right = s.size() - 1;     // end
        while (left < right) {
           swap(s[left], s[right]); // swap characters
               left++;                  // move forward
               right--;                 // move backwar
        }


      
    }
    
};