class Solution{
public:
    int isPrime(int N){
        // code here
        if(N==1) return 0;
        if(N==2 || N==3) return 1;
        if(N%2==0 || N%3==0) return 0;
        for(int i=5; i*i<=N; i+=6){
            if(N%i==0|| N%(i+2)==0) return 0;
        }
        return 1;
    }
};


// class Solution{
// public:
//     int isPrime(int N){
//         // code here
//         int is_prime = 1;
//         if(N==1) return 0;
//         for(int i=2; i<=N/i; i++){
//             if(N%i==0) is_prime=0;
//         }
//         return is_prime;
//     }
// };


// class Solution{
// public:
//     int isPrime(int N){
//         // code here
//         int is_prime = 1;
//         if(N==1) return 0;
//         for(int i=2; i*i<=N; i++){
//             if(N%i==0) is_prime=0;
//         }
//         return is_prime;
//     }
// };