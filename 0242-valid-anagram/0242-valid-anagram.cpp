class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) //checking the  length of the string
            return false;

        sort(s.begin(),s.end()); //sprting both the string 
        sort(t.begin(),t.end());

        return s == t;
        //upload the code on github

        
    }
};