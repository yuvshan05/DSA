
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum=0;
        int total=(n*(n+1))/2;
        for(int i=0;i<n-1;i++)
        {
            sum=sum+array[i];
        }
        return (total-sum);
    }
};
