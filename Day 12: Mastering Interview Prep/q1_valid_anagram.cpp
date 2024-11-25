#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    vector<int> count(26, 0);

    for (char c : s) count[c - 'a']++;
    for (char c : t) {
        count[c - 'a']--;
        if (count[c - 'a'] < 0) return false;
    }

    return true;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << (isAnagram(s, t) ? "true" : "false") << endl;
    return 0;
}
