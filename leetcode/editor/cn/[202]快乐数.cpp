
#include <unordered_set>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 取数值个位上的单数之和
    int getSum(int n) {
        int sum = 0;
        while (n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        // 哈希表
        unordered_set<int> set;
        while (true) {
            int sum = getSum(n);
            if (sum == 1) {
                return true;
            }
            // 如果sum出现过，说明进入无限循环
            if (set.find(sum) != set.end()) {
                return false;
            } else {
                set.insert(sum);
            }
            n = sum;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)
