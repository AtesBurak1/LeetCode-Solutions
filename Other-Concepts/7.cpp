class Solution {
public:
    int reverse(int x) {
      long long int sum=0;
        if(x>=pow(2,31) || x<pow(-2,31))
            return 0;
      while(x>0)
      {
          sum*=10;
          sum+=x%10;
          x=x/10;
      }
        while(x<0)
      {
          sum*=10;
          sum+=x%10;
          x=x/10;
      }
        if(sum>=pow(2,31) || sum<pow(-2,31))
            return 0;
        return sum;
    }
};