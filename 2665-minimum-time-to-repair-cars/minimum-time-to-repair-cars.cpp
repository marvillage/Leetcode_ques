class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
       long long low=0;
       long long min=*min_element(ranks.begin(),ranks.end());
       long long high=min*1LL*cars*cars;
       long long ans=high;
       while(low <=high)
       {
        long long mid=(low+high)/2;
        long long tc=0;
        for(int r : ranks)
        {
            tc+=sqrt(mid/r);
        }
        if(tc>=cars){
            ans=mid;
            high=mid-1;
            }
            else{
                low=mid+1;
            }
        
       }
       return ans; 
    }
};