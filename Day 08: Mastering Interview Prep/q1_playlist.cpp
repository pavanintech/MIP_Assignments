#include <iostream>
#include <unordered_set>
using namespace std;

void checkPairsInPlaylist(int T) {
    while (T--) {
        int n, target;
        cin >> n >> target;
        int playlist[n];
        for (int i = 0; i < n; i++) {
            cin >> playlist[i];
        }

        unordered_set<int> seen;
        bool found = false;

        for (int i = 0; i < n; i++) {
            int complement = target - playlist[i];
            if (seen.count(complement)) {
                found = true;
                break;
            }
            seen.insert(playlist[i]);
        }

        if (found) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}

int main() {
    int T;
    cin >> T;
    checkPairsInPlaylist(T);
    return 0;
}
