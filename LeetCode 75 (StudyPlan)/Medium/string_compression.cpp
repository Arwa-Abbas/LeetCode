class Solution {
public:
    int compress(vector<char>& chars) {
        int j=0;
        for (int i=0;i<chars.size();)
        {
            char letter=chars[i];
            int count=0;
            while (i<chars.size() && chars[i]==letter)
            {
                count++;
                i++;
            }

            chars[j++]=letter;
            if (count>1)
            {
                for (char ch: to_string(count))
                {
                    chars[j++]=ch;
                }
            }
        }
        return j;
    }
};

/*Explanation:
This is how to approach this question by two pointers:
one pointer is i which iterated through the chars vector
one pointer is j which keep track of current postion in compressed vector

->first initialzed a varaible (letter here ) with first element of chars vector, count is 0 right now
-> then iterate through the vector to find a different character or reach end of vector
-> count keep tracks of consecutive characters of vector
To illustrate, it works like this: 
letter='a' , in while loop-> chars[i]=='a'   (yes count++)

-> When you find a different letter such as while loop condition doesnt match you write it compressed vector
and 'j' acts as index of the array.
->Now to deal with single characters, if count greater than 1 then also write that to compressed vector and convert it to string.
->Return j

Time Complexity: O(n)
Space Complexity : O(1)
*/
