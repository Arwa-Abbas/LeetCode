class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergedword;
        int i=0;
        while (i<word1.length() || i<word2.length())
        {
            if (i<word1.length())
            mergedword.push_back(word1[i]);
            if (i<word2.length())
            mergedword.push_back(word2[i]);
            i++;
        }
		return mergedword;
    }
};

/* Explanation: 
This problem ask you to store characters of two input strings alternatively in merged string and 
rest characters of largest input string is appended at the end of merged string.
There are two cases: 1) equal input string 2) one input string is larger than another

-> We have to iterate a loop till length of input string and push one character in mergedword alternatively for word1 and word2.
-> For equal string, we can either take iteration till length of word1 or word2 and push alternatively, but if one 
input string is greater than another we have to push alternatively and then rest character of largest string to
merge string so we have to take iterations till largest input string.

Complexity
Time complexity:
We are iterating a loop till input string and pushing characters so time complexity is 0(n) : n is length of largest input string.

Space complexity:
We are iterating a loop till input string and pushing characters so space complexity is 0(n) too: n is length of largest input string.
*/
