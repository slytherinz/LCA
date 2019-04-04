//
// Created by cloudlz on 2019/3/8.
//
#include "string_type.h"
/**
 * 给定一个字符串 s，找到 s 中最长的回文子串
 * @param s
 * @return
 */
string StringType::longestPalindrome(string s) {
    //s长度为0
    if (s.length() == 0) {
        return "";
    }
    //s长度为1
    if (s.length() == 1) {
        return s;
    }
    //s长度>=2，（别漏掉最少也是1个的情况）
    int longestLeftpos;
    int longestRightpos;
    int longest = 0;
    for (int i = 1; i < s.length(); i++) {
        int oddleft = i;
        int oddright = i;
        //奇
        while(oddleft >= 0 && oddright < s.length() && s[oddleft] == s[oddright]) {
                if (oddright - oddleft + 1 > longest) {
                    longest = oddright - oddleft + 1;
                    longestLeftpos = oddleft;
                    longestRightpos = oddright;
                }
                oddleft--;
                oddright++;
        }
        int evenleft = i-1;
        int evenright = i;
        //偶
        while(evenleft >= 0 && evenright < s.length() && s[evenleft] == s[evenright]) {
                if (evenright - evenleft + 1 > longest) {
                    longest = evenright - evenleft + 1;
                    longestLeftpos = evenleft;
                    longestRightpos = evenright;
                }
                evenleft--;
                evenright++;
        }
    }
    return s.substr(longestLeftpos, longest);

}
