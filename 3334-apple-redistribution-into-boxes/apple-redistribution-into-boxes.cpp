class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
     sort(capacity.begin(),capacity.end(),greater<int>());
     int sum=0;
     int c=0;
     int mainsum=accumulate(apple.begin(),apple.end(),0);
     for(int x : capacity )
     {
        sum+=x;
        c++;
        if(sum>=mainsum)
        return c;

     }  
     return -1; 
    }
};