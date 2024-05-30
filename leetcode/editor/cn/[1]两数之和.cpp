
#include <vector>
#include <unordered_map>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 哈希表
        unordered_map <int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            // 寻找是否存在匹配
            auto iter = map.find(target - nums[i]);
            if (iter != map.end()) {
                return {iter->second, i};
            }
            // 如果没找到，加入map
            map.insert(pair<int, int>(nums[i], i));
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)
