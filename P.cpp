#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s1;
    while (n--) {
        string s;
        cin >> s;
        s1.push_back(s);
    }

    for (int i = s1.size() - 1; i >= 0; i--) {
        cout << s1[i] << endl;
    }

    return 0;
}
