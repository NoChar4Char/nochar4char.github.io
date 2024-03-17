#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int y;
        cin >> y;
        for (int j = 0; j < 50; j++) {
            
        }
        string n;
        cin >> n;

        if (y < 2010) {
            cout << "INVALID" << endl;
        } else if (n.size() > 50) {
            cout << "INVALID" << endl;
        } else if (n.find("Cal ") || n.find("Berkeley ") || n.find("California ")) {
            cout << "INVALID" << endl;
        } else {
            cout << "VALID" << endl;
        }
    }
}