#include<iostream>
using namespace std;

int numberOfMatches(int n) {
    return n-1;
}

int main() {
    int n;
    cout << "Enter the number of teams: ";
    cin >> n;
    cout << "Number of matches: " << numberOfMatches(n) << endl;
    return 0;
}