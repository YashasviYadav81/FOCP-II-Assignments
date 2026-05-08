#include <bits/stdc++.h>
using namespace std;

class Bank {
private:
    map<int, long long> accounts;

public:
    bool create(int userID, long long amount) {
        if (accounts.count(userID)) {
          
            accounts[userID] += amount;
            return false;
        }
     
        accounts[userID] = amount;
        return true;
    }

    bool debit(int userID, long long amount) {
        // User not present 
        if (!accounts.count(userID) || accounts[userID] < amount)
            return false;
        
        accounts[userID] -= amount;
        return true;
    }

    bool credit(int userID, long long amount) {
        // User not present
        if (!accounts.count(userID))
            return false;
        
        accounts[userID] += amount;
        return true;
    }

    long long balance(int userID) {
        if (!accounts.count(userID))
            return -1;
        
        return accounts[userID];
    }
};

int main() {
    int q;
    scanf("%d", &q);

    Bank bank;

    while (q--) {
        char query[20];
        scanf("%s", query);
        string op(query);

        if (op == "CREATE") {
            int x;
            long long y;
            scanf("%d %lld", &x, &y);
            printf("%s\n", bank.create(x, y) ? "true" : "false");
        }
        else if (op == "DEBIT") {
            int x;
            long long y;
            scanf("%d %lld", &x, &y);
            printf("%s\n", bank.debit(x, y) ? "true" : "false");
        }
        else if (op == "CREDIT") {
            int x;
            long long y;
            scanf("%d %lld", &x, &y);
            printf("%s\n", bank.credit(x, y) ? "true" : "false");
        }
        else if (op == "BALANCE") {
            int x;
            scanf("%d", &x);
            printf("%lld\n", bank.balance(x));
        }
    }

    return 0;
}
