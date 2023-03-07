class Solution {
public:
    int candy(vector<int>& ratings) {
        int k = 1, ind = 0;
        int ans = 1;
        for (int i = 1; i < ratings.size(); ++i) {
            if (ratings[i] > ratings[i - 1]) {
                ans += ++k;
                ind = i;
            } else 
            if (ratings[i] == ratings[i - 1]){
                k = 1;
                ans += k;
                ind = i;
            } else {
                while (i + 1 < ratings.size() && ratings[i + 1] < ratings[i]) {
                    ++i;
                }
                if (i - ind + 1 > k) {
                    ans += i - ind + 1 - k;
                }
                ans += (i - ind) * (i - ind + 1) / 2;
                k = 1;
            }
        }
        return ans;
    }
};
