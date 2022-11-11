class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        sort(strs.begin(),strs.end());
        string compare = strs[0];
        int stringCount = strs.size();
        if (stringCount == 1)
            return compare;
        for (int i = 0; compare.length() && compare[i] != '\0'; i++){
            bool found = false;
            for(int j = 1; j < strs.size(); j++){
                if (compare[i] == strs[j][i])
                    found = true;
                else
                    found = false;
            }
            if (found)
                result += compare[i];
            else
                break;
        }
        return result;
    }
};
