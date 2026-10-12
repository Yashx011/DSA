class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int right = n-1;
        while(right>= 0){
            if ((num[right] - '0') % 2 != 0){
               return num.substr(0, right + 1);
            }else {
                right--;
            }
           
        }
        return "";
    }
};