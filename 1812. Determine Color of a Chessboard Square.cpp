class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int square = coordinates[0]-'a'+coordinates[1]-'0';
        return square % 2 == 0 ? true : false;
    }
};
