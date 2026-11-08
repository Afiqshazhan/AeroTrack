#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string line(30, '=');   // one border, reused below

    cout << "===== Welcome to AeroTrack =====" << endl;

    // Quest 1: name
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    // Quest 2: staff ID
    string staffId;
    cout << "Enter your staff ID: ";
    getline(cin, staffId);

    // Quest 3: role selection
    cout << "\nSelect your role:" << endl;
    cout << "1. Aircraft Engineer" << endl;
    cout << "2. Technician" << endl;
    cout << "3. Inspector" << endl;
    cout << "Enter choice: ";

    int roleChoice;
    cin >> roleChoice;

    string role;
    switch (roleChoice) {
        case 1: role = "Aircraft Engineer"; break;
        case 2: role = "Technician"; break;
        case 3: role = "Inspector"; break;
        default: role = "Unknown"; break;
    }   // <-- the missing brace

    // Quest 4: profile card
    cout << "\n" << line << endl;
    cout << "        STAFF PROFILE" << endl;
    cout << line << endl;
    cout << left << setw(10) << "Name"     << ": " << name    << endl;
    cout << left << setw(10) << "Staff ID" << ": " << staffId << endl;
    cout << left << setw(10) << "Role"     << ": " << role    << endl;
    cout << line << endl;

    return 0;
}