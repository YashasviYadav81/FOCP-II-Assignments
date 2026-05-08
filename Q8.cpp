#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    if (name.empty()) {
        cout << "Please enter a valid name!" << endl;
        return 0;
    }

    vector<string> excuses = {
        "{name} could not complete the assignment because the laptop battery died unexpectedly at 99 percent.",
        "{name} finished the homework but the dog ate the notebook and then looked innocent.",
        "{name} was about to submit but the WiFi router caught feelings and stopped working.",
        "{name} completed the assignment but accidentally deleted it while trying to rename the file.",
        "{name} could not do homework because there was a powercut exactly when the work was about to be saved.",
        "{name} was doing the assignment but the pen ran out of ink and there was no other pen in the entire house.",
        "{name} tried to submit online but the website kept saying error 404 all night.",
        "{name} could not finish because a family member needed the laptop urgently for a very important video call.",
        "{name} was working on the assignment but fell asleep for just 2 minutes and woke up the next morning.",
        "{name} completed everything but left the notebook in the school bag which got left in the auto rickshaw.",
        "{name} could not do homework because the textbook was borrowed by a friend who never returned it.",
        "{name} was almost done but accidentally submitted a blank file and only realized it the next morning."
    };

    int index = rand() % excuses.size();
    string excuse = excuses[index];

    // Replace {name} with actual name
    string placeholder = "{name}";
    size_t pos = excuse.find(placeholder);
    while (pos != string::npos) {
        excuse.replace(pos, placeholder.length(), name);
        pos = excuse.find(placeholder, pos + name.length());
    }

    cout << "\n*** EXCUSE GENERATOR ***" << endl;
    cout << excuse << endl;
    cout << "\nBetter luck next time!" << endl;

    return 0;
}
