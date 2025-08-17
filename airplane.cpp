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