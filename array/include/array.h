//
// Created by cloudlz on 2018/12/12.
//

#ifndef LCA_ARRAY_H
#define LCA_ARRAY_H

#include <vector>
using namespace std;
class Array{
public:
    //使数组唯一的最小增量
    static int minIncrementForUnique(vector<int>& A);
    static int minIncrementForUniqueOptimize(vector<int>& A);
};
#endif //LCA_ARRAY_H
