
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int i,total=1;
         
         for( i=2;i<=n;i++)
         {
             total+=i;
             total-=array[i-2];
        
