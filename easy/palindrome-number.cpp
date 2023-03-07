class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int k = 0, y = 0;
        for (int z = x; z; z /= 10, k++);
        for (int i = 0; i < k / 2; i++) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        if (k % 2) {
            x /= 10;
        } 
        return x == y;
    }
};
