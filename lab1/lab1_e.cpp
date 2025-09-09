#include <iostream>
using namespace std;

int findMax(int num1, int num2, int num3) {
int max = 0;
if ((num1 > num2) && (num1 > num3))
max = num1;
if ((num2 > num1) && (num2 > num3))
max = num2;
if ((num3 > num1) && (num3 > num2))
max = num3;
return max;
}

int main() {
    int T; 
    cin >> T;   // T = tổng số dòng dữ liệu (ở đây = 12)
    
    int numTest = T / 3;   // số test case = T / 3
    for (int i = 0; i < numTest; i++) {
        int a, b, c;
        cin >> a >> b >> c;   // đọc 3 số liên tiếp
        cout << findMax(a, b, c) << endl;
    }
    return 0;
}