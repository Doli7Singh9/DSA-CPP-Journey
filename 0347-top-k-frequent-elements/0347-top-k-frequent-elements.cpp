class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> bucket(nums.size()+1);
        unordered_map<int,int> freq;  // 4 4  5 6 6 6
        for(int num: nums){
            freq[num]++;   //  4- 2 and 5 - 1 and 6 - 3
        }
        
        for(auto it: freq){
            bucket[it.second].push_back(it.first);   //now we are filling these buckets 
        }  // bucket(2 - freq) - 4(element)
        // bucket(1 - freq) - 5(element)
        // bucket(3 - freq) - 6(element)
//final bucket 
/*index → elements
-----------------
0 → []
1 → [5]
2 → [4]
3 → [6]
4 → []
5 → []
6 → []   
 
*/
        vector<int> ans;
        for(int i = bucket.size() - 1; i >= 0 && ans.size() < k; i--) {
            for(int num : bucket[i]) {
                ans.push_back(num);
                if(ans.size() == k)
                    return ans;
            }
        }
        return ans;
    }  
};

        
/* HASH MAP METHOD
        unordered_map<int , int> freq;

        for(int num : nums ){
            freq[num]++;
        }
        vector<pair<int, int>> arr;
        for(auto it : freq){
            arr.push_back({it.first,it.second});
        }

        sort(arr.begin(), arr.end(), [](pair<int,int>& a, pair<int,int>& b){
            return a.second > b.second;
        });

        vector<int> ans;
        for(int i =0; i<k; i++){
            ans.push_back(arr[i].first);
        }

       return ans; 
    }
};
*/

       