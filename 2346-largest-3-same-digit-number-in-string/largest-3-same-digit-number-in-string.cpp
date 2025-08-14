class Solution {
public:
    string largestGoodInteger(string num) {
        for (char d = '9'; d >= '0'; d--) {
            string triplet(3, d);
            if (num.find(triplet) != string::npos) {
                return triplet;
            }
        }
        return "";
    }
};