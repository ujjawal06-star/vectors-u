#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> v{1, 2, 2, 3, 3, 3, 4, 4, 5};

    map<int, int> freq;
    for (int n : v) {
        freq[n]++;
    }

    cout << "Frequencies:" << endl;
    for (auto p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }
    return 0;
}
