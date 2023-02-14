class Solution
{
    public long reverse_digit(long x)
    {
        // Code here
        long rev = 0;
        while (x != 0) {
            long pop = x % 10;
            x /= 10;
            rev = rev * 10 + pop;
        }
        return rev;
    }
}