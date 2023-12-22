#include <bits/stdc++.h>
using namespace std;

void solve() {
    ifstream in("in.txt");
    ofstream out("out.txt");

    string line = "";
    int num = 0;
    int sum = 0;
    while (!in.eof()) {
        getline(in, line);
        for (char c : line) {
            if (c >= '0' && c <= '9') {
                num = (c - '0') * 10;
                break;
            }
        }
        reverse(line.begin(), line.end());
        for (char c : line) {
            if (c >= '0' && c <= '9') {
                num += c - '0';
                break;
            }
        }
        sum += num;
    }

    out << sum;
    
    out.close();
    in.close();
}

int main() {
    solve();
}