
#include <vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // 定义结果
        int result = 0;
        // 定义每次遍历的1的个数
        int tmp = 0;
        // 遍历
        for (int num : nums) {
            // 如果为1，个数加1
            if (num == 1) {
                tmp++;
            } else {
                // 如果不为1，则取最大的作为结果
                result = max(tmp, result);
                // tmp置空
                tmp = 0;
            }
        }
        // 如果最后一位是1，则还须一次取最大
        result = max(tmp, result);
        // 返回结果
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
