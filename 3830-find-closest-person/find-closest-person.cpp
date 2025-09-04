class Solution {
public:
    int findClosest(int x, int y, int z) {
        int firstD = abs(z-x);
        int secondD = abs(y-z);
        if(firstD > secondD) return 2;
        else if(secondD > firstD) return 1;
        else return 0;
    }
};