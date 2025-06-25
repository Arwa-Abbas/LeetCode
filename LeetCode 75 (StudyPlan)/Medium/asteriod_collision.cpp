class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> s;
        for (int i:asteroids) 
        {
            bool destroyed=false;
            while (!s.empty() && s.top()>0 && i<0) 
            {
                if (abs(i)>s.top())  {
                    s.pop();  
                    continue;
                } 
                else if (abs(i)==s.top()) {
                    s.pop();  
                    destroyed=true;
                    break;
                } 
                else {
                    destroyed=true;  
                    break;
                }
            }
            if (!destroyed) 
                s.push(i);
        }
        vector<int> output(s.size());
        for (int i=s.size()-1;i>=0;--i) 
        {
            output[i]=s.top();
            s.pop();
        }
        return output;
    }
};

/* Time Complexity: O(n)
Space Complexity: O(n)
*/
