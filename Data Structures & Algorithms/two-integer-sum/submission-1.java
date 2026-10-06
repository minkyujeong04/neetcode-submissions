class Solution {
    public int[] twoSum(int[] nums, int target) {
        int sum = 0;
        int i1 = 0;
        int i2 = 0;
        boolean found = false;

        for(int i = 0; i < nums.length; i++)
        {
            for(int j = 0; j < nums.length; j++)
            {
                if(i == j)
                {
                    continue;
                }
                if(nums[i] + nums[j] == target)
                {
                    i1 = i;
                    i2 = j;
                    found = true;
                }
            }
            if(found)
            {
                break;
            }
        }
        int[] result = new int[2];
        result[0] = i1;
        result[1] = i2;

        return result;
    }
}
