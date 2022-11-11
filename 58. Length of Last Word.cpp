class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastWord = 0;
        int len = 0;
        for(int i = s.length()-1; i >=0; i--){
            if(s[i] != ' '){
                if(lastWord == 0){
                    len++;
                    lastWord = 1;
                    continue;
                }
                len++;
            }
            if(s[i] == ' ' && lastWord == 1)
                return len;
        }
        return len;
    }
};
