#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int temp = num, sum = 0;
    int digits = to_string(num).length();

    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    for (int i = 100; i <= 9999; i++) {
        if (isArmstrong(i))
            cout << i << " ";
    }
    return 0;
}
