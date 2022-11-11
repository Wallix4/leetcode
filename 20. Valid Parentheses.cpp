class Solution {
public:
    
    bool isValid(string s) {
      stack<char> p;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' ||s[i] == '[')
                p.push(s[i]);
            else if(s[i] == ')' && !p.size() == 0 && p.top() == '(')
                p.pop();
            else if(s[i] == ']' && !p.size() == 0 && p.top() == '[')
                p.pop();
            else if(s[i] == '}' && !p.size() == 0 && p.top() == '{')
                p.pop();
            else
                return false;
        }
        return p.size() == 0;
    }
};
