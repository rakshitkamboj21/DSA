#include <iostream>
#include <set>
using namespace std;

bool isPalindrome(int n) {
    int original = n, rev = 0;

    while(n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    return original == rev;
}

bool hasRepeatedDigits(int n) {
    set<int> digits;

    while(n > 0) {
        int d = n % 10;

        if(digits.count(d))
            return true;

        digits.insert(d);
        n /= 10;
    }

    return false;
}

int main() {

    int L, R;
    cin >> L >> R;

    bool found = false;

    for(int i = L; i <= R; i++) {

        if(i % 7 == 0 && i % 5 != 0 && !isPalindrome(i) && !hasRepeatedDigits(i)) {
            cout << i << " ";
            found = true;
        }

    }

    if(!found)
        cout << -1;

    return 0;
}