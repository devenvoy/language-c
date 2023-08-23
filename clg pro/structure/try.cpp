#include <iostream>
using namespace std;

struct Cricket {
    string playerName;
    string teamName;
    float battingAverage;
};

int main() {
    Cricket players[20];
    for (int i = 0; i < 20; i++) {
        cout << "Enter player name: ";
        cin >> players[i].playerName;
        cout << "Enter team name: ";
        cin >> players[i].teamName;
        cout << "Enter batting average: ";
        cin >> players[i].battingAverage;
    }
    for (int i = 0; i < 20; i++) {
        for (int j = i + 1; j < 20; j++) {
            if (players[i].teamName == players[j].teamName) {
                cout << players[i].playerName << ": " << players[i].battingAverage << endl;
                cout << players[j].playerName << ": " << players[j].battingAverage << endl;
            }
        }
    }
    return 0;
}
