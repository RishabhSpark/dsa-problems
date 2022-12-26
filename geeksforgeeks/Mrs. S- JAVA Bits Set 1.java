class GfG{
    public static int countSetBits(long n){
        int counter=0;
        while (n>0) {
            counter+=n&1;
            n>>=1;
        }
        return counter;
    }
    
    public static int countunsetbits(long n){
        long x = n;
        n |= n >> 1;
        n |= n >> 2;
        n |= n >> 4;
        n |= n >> 8;
        n |= n >> 16;
        return Long.bitCount(x^n);
    }
    
    public void count(long n){
        // your code here.
       System.out.println(countSetBits(n)+ " "+ countunsetbits(n));
    }
}