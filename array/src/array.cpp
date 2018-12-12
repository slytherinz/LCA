//
// Created by cloudlz on 2018/12/12.
//
#include "array.h"
#include <map>
int Array::minIncrementForUnique(vector<int> &A) {
    int count=0;
    if(A.size() <= 1) {
        return 0;
    }
    //排序
    sort(A.begin(), A.end());
    map<int,int> countmap;
    //数字和出现的次数的map
    for(int i=0;i<A.size();i++) {
        map<int,int>::iterator iter = countmap.find(A[i]);
        if(iter != countmap.end()) {
            iter->second++;
        } else {
            countmap.insert(std::pair<int,int>(A[i],1));
        }
    }
    for(int i=1;i<A.size();i++) {
        if(A[i]==A[i-1]) {
            int num = A[i];
            bool flag = false;
            do{
                count++;
                num++;
                map<int,int>::iterator it = countmap.find(num);
                if(it == countmap.end()){
                    countmap.insert(std::pair<int,int>(num,1));
                    flag = true;
                }
            }while (flag == false);
        }
    }
    return count;
}
int Array::minIncrementForUniqueOptimize(vector<int> &A) {
    int count=0;
    if(A.size() <= 1) {
        return 0;
    }
    sort(A.begin(),A.end());
    for(int i=1;i<A.size();i++) {
        while(A[i]<=A[i-1]) {
            count++;
            A[i] = A[i]+1;
        }
    }
    return count;
}

