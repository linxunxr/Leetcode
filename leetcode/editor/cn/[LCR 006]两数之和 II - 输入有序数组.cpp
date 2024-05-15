
#include <vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // 双指针
        // 定义左指针
        int leftIndex = 0;
        // 定义右指针
        int rightIndex = numbers.size() - 1;
        // 遍历 同一个数字不能使用两次
        while (leftIndex < rightIndex) {
            // 如果左指针位置 + 右指针位置 < 目标值，则左指针右移
            if (numbers[leftIndex] + numbers[rightIndex] < target) {
                leftIndex++;
            } else if (numbers[leftIndex] + numbers[rightIndex] > target) {
                // 如果左指针位置 + 右指针位置 > 目标值，则右指针左移
                rightIndex--;
            } else {
                // 如果相等，则停止
                break;
            }
        }
        // 结果数组构建
        vector<int> result;
        result.push_back(leftIndex);
        result.push_back(rightIndex);
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
