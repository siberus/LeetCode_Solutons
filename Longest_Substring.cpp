#include <unordered_map>
#include <string>
#include <iostream>
#include <algorithm>


class Solution {
public:
    
    int lengthOfLongestSubstring(std::string s) {

        std::unordered_map<char, int> characters;
        int maxCount = 0;
        int start = 0;
       
        for (int end = 0; end < s.size(); end++)
        {  
            if (characters.find(s[end]) != characters.end())
            {
               start = std::max(start, characters[s[end]]+1);
            }
           characters[s[end]] = end;
           maxCount = std::max(maxCount, end - start +1);
            
        }
        
        return maxCount;
    }
};

int main()
{
    
    int answer;
    Solution num;
    
    std::cout << num.lengthOfLongestSubstring("abba")  <<  std::endl;
    return 0;
}
