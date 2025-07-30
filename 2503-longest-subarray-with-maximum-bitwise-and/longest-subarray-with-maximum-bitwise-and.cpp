class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int maxv=0;
       for(int num : nums)
       {
        maxv=max(num,maxv);
       } 
       int l=0;
       int c=0;
       for(int num : nums)
       {
        if(num==maxv)
        {
            c+=1;
            l=max(l,c);
        }
        else{
            c=0;
        }
       }
       return l;
    }
};