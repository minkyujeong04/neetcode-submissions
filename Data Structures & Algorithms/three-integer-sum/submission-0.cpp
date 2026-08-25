class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();

        // 1. Sort the array
        sort(nums.begin(), nums.end());

        // Iterate through the array with 'i' (first element of the triplet)
        for (int i = 0; i < n; ++i) {
            // Optimization: If the current number is positive,
            // and the array is sorted, subsequent numbers will also be positive.
            // Thus, no way to sum to zero.
            if (nums[i] > 0) {
                break;
            }

            // Skip duplicate values for nums[i] to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            // Initialize two pointers for the remaining part of the array
            int left = i + 1;
            int right = n - 1;
            int target_sum = -nums[i]; // We need nums[left] + nums[right] = -nums[i]

            // Use two-pointer approach
            while (left < right) {
                int current_sum = nums[left] + nums[right];

                if (current_sum == target_sum) {
                    // Found a triplet
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicate values for nums[left] and nums[right]
                    // to ensure unique triplets in the result
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    // Move both pointers inward to find new distinct pairs
                    left++;
                    right--;
                } else if (current_sum < target_sum) {
                    // Sum is too small, need a larger value from the left side
                    left++;
                } else { // current_sum > target_sum
                    // Sum is too large, need a smaller value from the right side
                    right--;
                }
            }
        }

        return result;
    }
};