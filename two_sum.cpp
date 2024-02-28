#include <vector>
#include <unordered_map>

class Solution {
public: 


    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int,int> data;
        std::vector<int> answer;
        for (int i = 0; i < nums.size(); i++)
        {
            if (auto it = data.find(target - nums[i]); it != data.end())
            {    
                answer.push_back(it -> second);
                answer.push_back(i);
                return answer;                
            }
            data[nums[i]] = i;
        }
        
        throw "Invalid input data";

    }
};