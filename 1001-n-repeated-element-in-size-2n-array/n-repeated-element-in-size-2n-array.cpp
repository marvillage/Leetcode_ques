class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
     int n=nums.size();
     int a=n/2;
     unordered_map<int,int> freq;
       for(int num : nums){
        freq[num]++;
       }
       for(auto it: freq)
       {
        if(it.second==a){
            return it.first;
        }
       }
       return -1;
       
    }
};