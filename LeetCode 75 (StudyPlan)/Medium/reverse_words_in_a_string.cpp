class Solution {
public:
    string reverseWords(string s) {
         int i=s.length()-1;
        int end=s.length()-1;
        int start;
        string reverse_word_string;

        while (i >= 0) {
            while (i>=0 && s[i]==' ') 
                i--;
            end=i;

            if (i < 0) 
            break; 

            while (i >= 0 && s[i]!=' ') 
                i--;

            start=i+1;
            string word=s.substr(start,end-start +1);
            if (!reverse_word_string.empty()) 
                reverse_word_string += ' ';
            reverse_word_string += word;
        }

        return reverse_word_string;
    }
};

/*  Time Complexity: O(n)
Space Complexity: O(1)
*/
