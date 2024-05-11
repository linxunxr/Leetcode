
#include <vector>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void reverseString(vector<char>& s) {
        // 双指针法
        // 左指针
        int leftIndex = 0;
        // 右指针
        int rightIndex = s.size() - 1;
        // 当左指针 < 右指针时，将左右指针位置的字符交换位置
        while (leftIndex < rightIndex) {
            swap(s[leftIndex++], s[rightIndex--]);
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)
