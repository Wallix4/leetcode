class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool overflow = false;
        if (digits[digits.size()-1]+1 == 10){
            digits[digits.size()-1] = 0;
            overflow = true;
        }
        else{
            digits[digits.size()-1]++;
        }
        for(int i = digits.size()-2; overflow && i >= 0;i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }
            else{
                digits[i]++;
                overflow = false;
            }
        }
        if(overflow){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
