class Solution {
public:
    int maxVowels(string s, int k) {
        int output=0;
        int maxoutput=0;
        for (int i=0;i<k;i++) 
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||s[i] == 'o' || s[i] == 'u') 
                output++;
        }
        maxoutput=output;
        for (int i = k; i < s.length(); i++) 
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
                output++;
            if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' ||
                s[i - k] == 'o' || s[i - k] == 'u') 
            {
                output--;
            }
            if (maxoutput<output)
                maxoutput=output;
        }
        return maxoutput;
    }
};

/*  Time Complexity: O(n)
Space Complexity: O(1)
*/
