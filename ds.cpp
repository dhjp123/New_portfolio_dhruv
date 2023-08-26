#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string data;
    cin >> data;

    unordered_map<char, int> mp;

    for (char ch : data) {
        mp[ch]++;
    }

    int sk = 0;
    for (auto it : mp) {
        if (it.second > 1) { 
            sk++;
        }
    }

    cout << sk << endl;

    return 0;
}
