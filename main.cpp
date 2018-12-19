#include <iostream>
#include <vector>
#include "array.h"
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    int a[7] = {17,13,11,2,3,5,7};
    vector<int> b(a,a+7);
    vector<int> res = Array::deckRevealedIncreasing(b);
    for(int i=0;i<res.size();i++) {
        cout<<res[i]<<endl;
    }
    return 0;
}