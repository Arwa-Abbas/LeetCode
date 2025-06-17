class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1+str2==str2+str1)
        {
        int n=gcd(str1.length(),str2.length());
        return str1.substr(0,n);
        }
        else
        return "";
    }
};

/* Explanation: 
In this problem, basically there a big hint called gcd. Instead of loop iteration and checking one character 
by character for str1 and str2 we instead use gcd to find length of output. The iteration method wont work for
test case 2 as pattern repeats in str1. We extract the sub string from str1 by finding gcd which will be 
indicate the no of characters needed to be extracted. 
To handle test case 3 we check if (str1+str2) is not equal to (str2+str1) eg LEETCODE, CODELEET. 
For other cases, ABCABCABC=ABCABCABC etc.

Time Complexity: For comparsion (str1+str2==str2+str1) -> O(n+m) : where n is length of str1 and m is length of str2.
Space Complexity: O(n+m) -> considering both input strings take memory.
*/
