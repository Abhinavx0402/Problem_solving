#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Maps a number → its index
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if complement was already seen
            if (mp.count(complement)) {
                return { mp[complement], i };
            }

            // Store current number with its index
            mp[nums[i]] = i;
        }

        return {}; // No solution found (guaranteed not to reach here per problem)
    }
};