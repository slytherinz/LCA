//
// Created by cloudlz on 2018/12/12.
//

#ifndef LCA_ARRAY_H
#define LCA_ARRAY_H

#include <vector>
using namespace std;
class Array{
public:
    //945.使数组唯一的最小增量
    static int minIncrementForUnique(vector<int>& A);
    static int minIncrementForUniqueOptimize(vector<int>& A);
    //950. 按递增顺序显示卡牌
    static vector<int> deckRevealedIncreasing(vector<int>& deck);
    //954. 二倍数对数组
    static bool canReorderDoubled(vector<int>& A);
    //4. 寻找两个有序数组的中位数,时间复杂度为O(log(m+n))
    static double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
    static double findMedianSortedArraysBest(vector<int>& nums1, vector<int>& nums2);
};
#endif //LCA_ARRAY_H
