class Solution {
public:
    void sortColors(vector<int>& nums) {
        //first we will counting the 0s, 1, and 2s 
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;

        for(int x : nums){
            if (x == 0) cnt0++;
            else if (x == 1) cnt1++;
            else cnt2++;
        }

        /*
        now after above code 
        cnt0 = 1
        cnt1 = 2
        cnt2 =1 
        we have counted all the os, 1s and 2s.*/

        //now we will rewrite the array 
        int i =0; //it will write the correct number at correct position i is position

        while(cnt0--) nums[i++] = 0;  
        /* this line means that cnt0--
        since cnt0 is 1 so in while conditon it mean the loop will one times
        then 
        nums[i++] means i++ is a post increment it will first put the value at ith index    and     move forward(means increases)
        now 
        nums = [0,_,_,_]
        and now i = i(0)+1 = i =1  */
         while(cnt1--) nums[i++] = 1; 
         // nums = [0, 1, 1, _]  //nums[i++] = 1 at 1st postion   
                                 //nums[i++] = 1 at 2nd position 
         // i = 3
         while(cnt2--) nums[i++] = 2; 
         // nums =  [0 , 1, 1, 2]
    }
  
};