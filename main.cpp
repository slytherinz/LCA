#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include "array.h"
#include "list_types.h"
#include "string_type.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    const int arrSizeA = 2;
    int a[arrSizeA] = {1,3};
    vector<int> avector(a,a+arrSizeA);
    const int arrSizeB = 1;
    int b[arrSizeA] = {2};
    vector<int> bvector(b,b+arrSizeB);
    cout << Array::findMedianSortedArrays(avector, bvector) << endl;
    string sr = "ac";
    cout << StringType::longestPalindrome(sr) << endl;
    return 0;
}