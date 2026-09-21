class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int low,high,n;
        vector<vector<int>> result;
        n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            low=i+1;
            high=n-1;
            while(low<high)
            {
                int sum=nums[low]+nums[high];
                if(sum==-nums[i])
                {
                    result.push_back({nums[low],nums[high],nums[i]});
                    low++;
                    high--;
                    while(low<high && nums[low]==nums[low-1])
                        low++;
                    while(low<high && nums[high]==nums[high+1])
                        high--;
                }
                else if(sum<-nums[i])
                    low++;
                else
                    high--;
            }
        }
        return result;
    }
};
