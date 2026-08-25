class Solution {
public:
    int singleNumber(vector<int>& nums) {
        bool found = false;
        int ret;
        for(int i = 0; i < nums.size(); i++)
        {
            found = false;
            for(int j = 0; j < nums.size(); j++)
            {
                if(i == j)
                {
                    continue;
                }
                if(nums[i] == nums[j])
                {
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                ret = nums[i];
            }
        }

        return ret;
    }
};
