class Solution {
public:
    string convertToBase7(int num) {
        string res;
        int startInd = 0;
        int rem;
        if (num < 0){
            res = "-";
            startInd = 1;
        }
        if (num == 0)
            return "0";
        num = abs(num);
        while(num > 0){
            rem = num % 7;
            num /= 7;
            res = res + to_string(rem);
        }
        reverse(res.begin()+startInd, res.end());
        return res;
    }
};
