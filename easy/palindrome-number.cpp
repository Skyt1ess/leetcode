class Solution {
public:
    bool isPalindrome(int x) {
        long long y = x % 10, z = x / 10;
        while (z) {
            y = y * 10 + z % 10;
            z /= 10;
        }
        return (x >= 0 && x == y);
    }
};
