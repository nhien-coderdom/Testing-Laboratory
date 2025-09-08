#include <iostream>
using namespace std;

int f1(int x) {
    if (x > 10)
        return 2 * x;
    else
        return -x;
}

int main() {
    int T; 
    cin >> T;         // số lượng test case
    for (int i = 0; i < T; i++) {
        int x;
        cin >> x;
        cout << f1(x) << endl;
    }
    return 0;
}