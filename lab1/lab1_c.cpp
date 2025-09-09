#include <iostream>
using namespace std;

int f2(int x) {
if (x < 10)
  return 2 * x;
else if (x < 2)
     return -x;
else 
     return 2 * x;
}

int main() {
    int T; 
    cin >> T;         // số lượng test case
    for (int i = 0; i < T; i++) {
        int x;
        cin >> x;
        cout << f2(x) << endl;
    }
    return 0;
}