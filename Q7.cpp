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

    vector<string> roasts = {
        "{name} codes so slowly that even the turtle switched to Python.",
        "If laziness had a face, it would look exactly like {name}.",
        "{name} does not debug code, they just close the laptop and pray.",
        "Scientists discovered a new unit of slowness and named it after {name}.",
        "{name}'s WiFi password is stronger than their entire coding logic.",
        "The only thing {name} compiles successfully is excuses.",
        "{name} once tried to Google themselves and got zero results.",
        "{name}'s code has more bugs than a mosquito farm.",
        "Even Google cannot find an answer to why {name} codes like that.",
        "If procrastination was a degree, {name} would have a PhD in it.",
        "{name} thinks HTML is a programming language.",
        "The computer slows down when {name} sits in front of it."
    };

    int index = rand() % roasts.size();
    string roast = roasts[index];

    string placeholder = "{name}";
    size_t pos = roast.find(placeholder);
    while (pos != string::npos) {
        roast.replace(pos, placeholder.length(), name);
        pos = roast.find(placeholder, pos + name.length());
    }

    cout << "\n*** ROAST ***" << endl;
    cout << roast << endl;

    return 0;
}
