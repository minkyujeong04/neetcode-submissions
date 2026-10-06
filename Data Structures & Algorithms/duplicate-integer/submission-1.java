//import java.util.*;

class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> dupeCheck = new HashSet<>();

        for(int i = 0; i < nums.length; i++)
        {
            if(dupeCheck.contains(nums[i]))
            {
                return true;
            }
            dupeCheck.add(nums[i]);
        }
        return false;
    }
}