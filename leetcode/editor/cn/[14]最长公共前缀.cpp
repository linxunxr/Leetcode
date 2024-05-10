
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // 如果输入字符串为空，则直接返回空
        if (strs.empty()) {
            return "";
        }
        // 如果输入字符串数组只有一个，则直接返回第一个
        if (strs.size() == 1) {
            return strs[0];
        }
        // 对这个数组进行排序
        sort(strs.begin(), strs.end());
        // 最长公共前缀
        string result;
        // 先遍历第一个和第二个字符串
        for (int i = 0; i < min(strs[0].size(), strs[1].size()); ++i) {
            if (strs[0][i] == strs[1][i]) {
                // 如果第一个和第二个字符串有公共前缀，则加入到结果中
                result.push_back(strs[0][i]);
            } else {
                break;
            }
        }
        // 依次遍历剩下的内容
        for (int i = 2; i < strs.size(); ++i) {
            if (strs[i].empty()) {
                // 如果剩下内容为空
                return "";
            }
            for (int j = 0; j < min(result.size(), strs[i].size()); ++j) {
                // 如果存在和最长前缀相同的结果则跳过
                if (strs[i][j] == result[j]) {
                    continue;
                } else {
                    // 如果第一个字符就出现不相符，则没有公共前缀
                    if (j == 0) {
                        result = "";
                    } else {
                        // 如果不是第一个字符，则对公共前缀进行删减
                        result = result.substr(0, result.length() - (result.size() - j));
                        break;
                    }
                }
            }
        }
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
