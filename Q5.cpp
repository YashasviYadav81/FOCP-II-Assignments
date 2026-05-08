#include <bits/stdc++.h>
using namespace std;

class MovieTicket {
private:
   map<int, int> movieBookings;

    set<pair<int,int>> bookedSet;
    const int MAX_SLOTS = 100;

public:
    bool book(int customerID, int movieID) {
      
        if (bookedSet.count({customerID, movieID}))
            return false;
        
        if (movieBookings[movieID] >= MAX_SLOTS)
            return false;
        
        bookedSet.insert({customerID, movieID});
        movieBookings[movieID]++;
        return true;
    }

    bool cancel(int customerID, int movieID) {
        // Not booked
        if (!bookedSet.count({customerID, movieID}))
            return false;
        
        bookedSet.erase({customerID, movieID});
        movieBookings[movieID]--;
        return true;
    }

    bool isBooked(int customerID, int movieID) {
        return bookedSet.count({customerID, movieID}) > 0;
    }

    int availableTickets(int movieID) {
        return MAX_SLOTS - movieBookings[movieID];
    }
};

int main() {
    int q;
    scanf("%d", &q);

    MovieTicket mt;

    while (q--) {
        char query[20];
        scanf("%s", query);
        string op(query);

        if (op == "BOOK") {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%s\n", mt.book(x, y) ? "true" : "false");
        }
        else if (op == "CANCEL") {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%s\n", mt.cancel(x, y) ? "true" : "false");
        }
        else if (op == "IS_BOOKED") {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%s\n", mt.isBooked(x, y) ? "true" : "false");
        }
        else if (op == "AVAILABLE_TICKETS") {
            int y;
            scanf("%d", &y);
            printf("%d\n", mt.availableTickets(y));
        }
    }

    return 0;
}
