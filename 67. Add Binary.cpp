class Solution {
public:
    string addBinary(string a, string b) {
        int max = 0;
        if (a.length() >= b.length()){
            max = a.length();
            for(int i = b.length(); i < max; i++){
                b  = " " + b;
            }
        }
        else{
            max = b.length();
            for(int i = a.length(); i < max; i++){
                a = " " + a;
            }
            string s = a;
            a = b;
            b = s;
        }
        
        bool of = false;
        for(int i = b.length(); i >= 0; i--){
            if(of){
                if(a[i] == '1'){
                    a[i] = '0';
                }
                else{
                    a[i] = '1';
                    of = false;
                }
            }
            if(a[i] == '1' && b[i] == '1'){
                of = true;
                a[i] = '0';
                continue;
            }
            if((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')){
                a[i] = '1';
                continue;
            }
             if(a[i] == '0' && b[i] == '0'){
                a[i] = '0';
                 continue;
            }
        }
         if(of){
              a = "1" + a;
         }
        return a;
    }
};
