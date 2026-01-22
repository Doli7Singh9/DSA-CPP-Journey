class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0;  //the value that is currently “alive”
        int count = 0;  //how many of it are alive after deleting pairs

        for(int num : nums){ //We scan the array once, left to right.

        if (count == 0){
            majority = num;
        }
        if (majority == num){
            count++;
        }
        else{
            count--;
        }
        }
    return majority;
    }
};