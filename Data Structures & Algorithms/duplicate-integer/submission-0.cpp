class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        int f =0;
        for (int i=0;i<n;i++)
        {for (int j=i+1;j<n;j++)
        if (nums[i]==nums[j])
        f = 1;}

        if(f==1)
        return true;
        else 
        return false;
            
        
    }
};