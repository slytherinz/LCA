#include <iostream>
#include <vector>
#include "array.h"
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    int a[6] = {3,2,1,2,1,7};
    vector<int> b(a,a+6);
    cout<<Array::minIncrementForUniqueOptimize(b);
    return 0;
}