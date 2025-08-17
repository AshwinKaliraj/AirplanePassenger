#include <iostream>
#include <cctype>
using namespace std;

void securityScreening();
void immigration();

int main() {
    securityScreening();
    immigration();
    return 0;
}
void securityScreening() {
    cout << "\nSecurity Screening\n";

    char ans;
    cout << "Any restricted articles ? (y/n): ";
    cin >> ans; ans = tolower(ans);

    if (ans == 'y') {
        cout << "Give up restricted articles\n";
    } else {
        cout << "No restricted articles Proceed\n";
    }

    cout << "Metal detected? (y/n): ";
    cin >> ans; ans = tolower(ans);

    if (ans == 'y') {
        cout << "Hand Search in progress\n";
        cout << "Dangerous goods found? (y/n): ";
        cin >> ans; ans = tolower(ans);

        if (ans == 'y') {
            cout << "Give up dangerous goods\n";
        } else {
            cout << "No dangerous goods Proceed\n";
        }
    } else {
        cout << "No metal detected Proceed\n";
    }

    cout << "Security Screening Completed\n";
}
void immigration() {
    cout << "\nImmigration Process\n";

    cout << "Passenger boards flight\n";
    cout << "Flight departs\n";
    cout << "Flight lands\n";

    char ans;
    cout << "Does passenger have a connecting flight? (y/n): ";
    cin >> ans; ans = tolower(ans);

    if (ans == 'y') {
        cout << "Proceed to security screening again for connection\n";
        securityScreening();
        return;
    }

    cout << "Passenger leaves flight\n";

    cout << "Permit to enter country granted? (y/n): ";
    cin >> ans; ans = tolower(ans);

    if (ans == 'y') {
        cout << "Claim baggage\n";
        cout << "End\n";
    } else {
        cout << "Entry denied Passenger sent back to originating country\n";
        cout << "End\n";
    }
}