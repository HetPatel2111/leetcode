class Solution {
public:
    vector<int> constructRectangle(int area) {
        int n = sqrt(area);
        vector<int> v(2); // first element -> width , second -> height
        int miniDiff = area;
        for(int i=1 ; i<=n ; i++){
            if(area%i == 0){
                int a = area / i;
                int b = area / a;

                if((a-b) < miniDiff){
                    v[0] = a;
                    v[1] = b;
                }
            }
        }

        return v;
    }
};