class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sum;
        vector<int> ret;
        bool found = false;

        for(int i = 0; i < numbers.size(); i++)
        {
            for(int j = 0; j < numbers.size(); j++)
            {
                if(i == j)
                {
                    continue;
                }

                if(numbers[i] + numbers[j] == target)
                {
                    ret.push_back(i+1);
                    ret.push_back(j+1);
                    found = true;
                }
                if(found)
                {
                    return ret;
                }
            }
        }

        return ret;
    }
};
