#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include "array.h"
#include "listTypes.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    const int arrSize = 16;
    int a[arrSize] = {-6,2,-6,4,-3,8,3,2,-2,6,1,-3,-4,-4,-8,4};
    vector<int> b(a,a+arrSize);
    bool res = Array::canReorderDoubled(b);
    cout<<boolalpha<<res<<endl;
    cout<<accumulate(b.begin(),b.end(),0)<<endl;
    int l1Arr[2] = {4,3};
    vector<int> l1vec(l1Arr,l1Arr+2);
    ListNode* l1 = new ListNode(2);
    ListTypes::insertNode(l1,l1vec);
    int l2Arr[2] = {6,4};
    vector<int> l2vec(l2Arr,l2Arr+2);
    ListNode* l2 = new ListNode(5);
    ListTypes::insertNode(l2,l2vec);
    cout << "start process." << endl;
    ListNode* resList = ListTypes::addTwoNumbers(l1,l2);
    while(resList != NULL) {
        cout<<resList->val<<endl;
        resList = resList->next;
    }
    return 0;
}