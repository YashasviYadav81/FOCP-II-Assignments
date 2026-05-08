#include <bits/stdc++.h>
using namespace std;
int parityXorTo(long long n) {
    
    switch (n % 4) {
        case 0: return n % 2;       
        case 1: return 1;
        case 2: return (n + 1) % 2; 
        case 3: return 0;
    }
    return 0;
}
int main() {
    long long L, R;
    scanf("%lld %lld", &L, &R);
     int parity = parityXorTo(R) ^ parityXorTo(L - 1);
    
    printf("%s\n", parity == 0 ? "even" : "odd");
    return 0;
}
