
#include <vector>
#include <unordered_map>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        // 哈希表
        unordered_map<int, int> umap;
        // 遍历前两个数组，统计两个数组元素之和和出现次数
        for (int a : nums1) {
            for (int b : nums2) {
                umap[a + b]++;
            }
        }
        // 统计结果次数
        int result = 0;
        // 遍历剩下两个数组
        for (int c : nums3) {
            for (int d : nums4) {
                if (umap.find(0 - (c + d)) != umap.end()) {
                    result += umap[0 - (c + d)];
                }
            }
        }
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
