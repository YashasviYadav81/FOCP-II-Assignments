#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            scanf("%lld", &a[i]);
        
        
        sort(a.begin(), a.end(), greater<long long>());
        
        set<long long> alexSeen, bobSeen;
        long long alexScore = 0, bobScore = 0;
        int turn = 0; 
        
        for (int i = 0; i < n; i++) {
            if (turn == 0) {
                
                if (!alexSeen.count(a[i])) {
                    alexSeen.insert(a[i]);
                    alexScore += a[i];
                    turn = 1; 
                }
            } else {
               
                if (!bobSeen.count(a[i])) {
                    bobSeen.insert(a[i]);
                    bobScore += a[i];
                    turn = 0; 
                }
            }
        }
        
        if (alexScore > bobScore)
            printf("Alex\n");
        else
            printf("Bob\n");
    }
    
    return 0;
}
