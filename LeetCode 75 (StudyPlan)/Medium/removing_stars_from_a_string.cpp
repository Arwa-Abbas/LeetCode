class Solution {
public:
    string removeStars(string s) {
        stack<char> starstring;
        string output;
        for (int i=0;i<s.length();i++) 
        {
            if (s[i]!='*') 
                starstring.push(s[i]);
            else {
                if (!starstring.empty()) 
                    starstring.pop(); 
            }
        }
        while (!starstring.empty()) 
        {
            output+=starstring.top();
            starstring.pop();
        }
        reverse(output.begin(),output.end());
        return output;
    }
};

/* Time Complexity: O(n)
Space Complexity: O(n)
*/
