class Solution {
public:
    int finddigitsum(int num){
  int sum=0;
  while(num)
  {
    sum+=num%10;
    num /=10;
  }
  return sum;
    }
    int countLargestGroup(int n) {
     unordered_map<int, int>mp;
     int maxsize=0;
     int c=0;
     for(int num=1 ; num<=n; num++){
        int digitsum=finddigitsum(num);
  mp[digitsum]++;
  if(mp[digitsum]==maxsize)
  {
        c++;
  }else if(mp[digitsum]> maxsize){
    maxsize=mp[digitsum];
    c=1;
  }
     }   return c;
    }
};