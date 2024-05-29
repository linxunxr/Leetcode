
#include <string>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isAnagram(string s, string t) {
        // 仅有26个小写字母，因此可用数组代替哈希表
        int record[26] = {0};
        // 遍历获取s中出现次数
        for (int i = 0; i < s.size(); ++i) {
            record[s[i] - 'a']++;
        }
        // 遍历减去t中出现次数
        for (int i = 0; i < t.size(); ++i) {
            record[t[i] - 'a']--;
        }
        // 遍历哈希表
        for (int i = 0; i < 26; ++i) {
            // 如果有存在不等于0的位置，则说明s和t有人多字母、有人少字母
            if (record[i] != 0) {
                return false;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
