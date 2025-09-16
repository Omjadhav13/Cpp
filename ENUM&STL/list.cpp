#include <iostream>
#include <list>
#include <string>
using namespace std;

class Songs {
private:
    list<string> song = { "Song A", "Song B", "Song C", "Song D", "Song E" };
public:

    void display() {
        for (string s : song) {
            cout << s << " ";
        }
        cout << endl;
    }

    void anti(int num) {
        for (int i = 0; i < num; i++) {
            song.push_back(song.front());
            song.pop_front();
            cout << "\nAfter " << i + 1 << " anti-clockwise rotation:" << endl;
            display();
        }
    }

    void clock(int num) {
        for (int i = num; i > 0; i--) {
            song.push_front(song.back());
            song.pop_back();
            cout << "\nAfter " << num - i + 1 << " clockwise rotation:" << endl;
            display();
        }
    }
};

int main() {
    Songs s;
    cout << "Original Playlist:" << endl;
    s.display();

    string firstChoice;
    int firstRotations = 0;
    int secondRotations = 0;

    // Get user's choice for first rotation direction
    while (true) {
        cout << "Do you want to rotate 'clockwise' or 'anti-clockwise' first? ";
        getline(cin, firstChoice);
        // convert to lowercase for easier checking
        for (auto & c: firstChoice) c = tolower(c);

        if (firstChoice == "clockwise" || firstChoice == "anti-clockwise") {
            break;
        } else {
            cout << "Invalid input. Please enter 'clockwise' or 'anti-clockwise'." << endl;
        }
    }

    cout << "Enter number of rotations for " << firstChoice << ": ";
    cin >> firstRotations;
    cin.ignore();  // clear newline after number input

    if (firstChoice == "clockwise") {
        s.clock(firstRotations);

        cout << "Enter number of rotations for anti-clockwise: ";
        cin >> secondRotations;
        s.anti(secondRotations);
    } else { // anti-clockwise first
        s.anti(firstRotations);

        cout << "Enter number of rotations for clockwise: ";
        cin >> secondRotations;
        s.clock(secondRotations);
    }

    return 0;
}

