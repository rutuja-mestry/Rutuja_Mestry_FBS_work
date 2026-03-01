#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Player {
public:
    int jerseyNo;
    string name;
    int runs;
    int wickets;
    int matches;

    void addPlayer() {
        cout << "Enter Jersey Number: ";
        cin >> jerseyNo;
        cin.ignore();
        cout << "Enter Player Name: ";
        getline(cin, name);
        cout << "Enter Runs: ";
        cin >> runs;
        cout << "Enter Wickets: ";
        cin >> wickets;
        cout << "Enter Matches Played: ";
        cin >> matches;
    }

    void display() {
        cout << "\nJersey No: " << jerseyNo;
        cout << "\nName: " << name;
        cout << "\nRuns: " << runs;
        cout << "\nWickets: " << wickets;
        cout << "\nMatches: " << matches << endl;
    }
};

vector<Player> players;

void addPlayer() {
    Player p;
    p.addPlayer();
    players.push_back(p);
    cout << "Player Added Successfully!\n";
}

void removePlayer() {
    int jersey;
    cout << "Enter Jersey Number to Remove: ";
    cin >> jersey;

    for (int i = 0; i < players.size(); i++) {
        if (players[i].jerseyNo == jersey) {
            players.erase(players.begin() + i);
            cout << "Player Removed Successfully!\n";
            return;
        }
    }
    cout << "Player Not Found!\n";
}

void searchPlayer() {
    int choice;
    cout << "1. Search by Jersey No\n2. Search by Name\n";
    cin >> choice;

    if (choice == 1) {
        int jersey;
        cout << "Enter Jersey Number: ";
        cin >> jersey;
        for (auto p : players) {
            if (p.jerseyNo == jersey) {
                p.display();
                return;
            }
        }
    } else {
        string name;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        for (auto p : players) {
            if (p.name == name) {
                p.display();
                return;
            }
        }
    }
    cout << "Player Not Found!\n";
}

void updatePlayer() {
    int jersey;
    cout << "Enter Jersey Number to Update: ";
    cin >> jersey;

    for (auto &p : players) {
        if (p.jerseyNo == jersey) {
            cout << "Enter New Runs: ";
            cin >> p.runs;
            cout << "Enter New Wickets: ";
            cin >> p.wickets;
            cout << "Enter New Matches: ";
            cin >> p.matches;
            cout << "Player Updated Successfully!\n";
            return;
        }
    }
    cout << "Player Not Found!\n";
}

void displayAll() {
    if (players.empty()) {
        cout << "No Players Available!\n";
        return;
    }
    for (auto p : players) {
        p.display();
    }
}

void top3Runs() {
    sort(players.begin(), players.end(),
         [](Player a, Player b) { return a.runs > b.runs; });

    cout << "\nTop 3 Players by Runs:\n";
    for (int i = 0; i < 3 && i < players.size(); i++) {
        players[i].display();
    }
}

void top3Wickets() {
    sort(players.begin(), players.end(),
         [](Player a, Player b) { return a.wickets > b.wickets; });

    cout << "\nTop 3 Players by Wickets:\n";
    for (int i = 0; i < 3 && i < players.size(); i++) {
        players[i].display();
    }
}

int main() {
    int choice;
    do {
        cout << "\n--- Player Management System ---\n";
        cout << "1. Add Player\n";
        cout << "2. Remove Player\n";
        cout << "3. Search Player\n";
        cout << "4. Update Player\n";
        cout << "5. Display All Players\n";
        cout << "6. Top 3 by Runs\n";
        cout << "7. Top 3 by Wickets\n";
        cout << "0. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1: addPlayer(); break;
        case 2: removePlayer(); break;
        case 3: searchPlayer(); break;
        case 4: updatePlayer(); break;
        case 5: displayAll(); break;
        case 6: top3Runs(); break;
        case 7: top3Wickets(); break;
        case 0: cout << "Exiting...\n"; break;
        default: cout << "Invalid Choice!\n";
        }
    } while (choice != 0);

    return 0;
}