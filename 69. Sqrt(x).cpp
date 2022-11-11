class Solution {
public:
    int mySqrt(int x) {
        if(x == 0){
            return 0;
        }
        double x_n = x;
        double x_prev;
        do {
            x_prev = x_n;
            x_n = (x_prev + x/x_prev)/2;
        }while(x_prev - x_n > 0.0001);
       
        return (int)x_n;
    }
};
