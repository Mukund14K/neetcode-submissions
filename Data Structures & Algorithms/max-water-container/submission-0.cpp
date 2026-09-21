class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
      int n=heights.size();
      int low=0,high=n-1,max_prev=0,width=0,curr;  
      while(low<high)
      {
        width=high-low;
        curr=min(heights[low],heights[high])*width;
        max_prev=max(max_prev,curr);
        if(heights[low]<heights[high])
            low++;
        else
            high--;
      }
      return max_prev;
    }
};
