class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int x = 0;
        int y = 0;
        int index = 0;
        if(stones.size() == 0)
        {
            return 0;
        }

        while(stones.size() > 1)
        {
            x = 0;
            y = 0;
            index = 0;
            for(int i = 0; i < stones.size(); i++)
            {
                if(stones[i] > x)
                {
                    x = stones[i];
                    index = i;
                }
            }
            stones.erase(stones.begin() + index);

            for(int i = 0; i < stones.size(); i++)
            {
                if(stones[i] > y)
                {
                    y = stones[i];
                    index = i;
                }
            }
            stones.erase(stones.begin() + index);

            if(x == y)
            {
                continue;
            }

            if(x > y)
            {
                x = x-y;
                stones.push_back(x);
            }
            else
            {
                y = y-x;
                stones.push_back(y);
            }
        }
        if(stones.empty())
        {
            return 0;
        }
        return stones[0];
    }
};
