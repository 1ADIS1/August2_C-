#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2, i;
    cin >> num1 >> num2;

    for (i = 1; i < 1000; i++)
    {
        if (num1 % i == 0 and num2 % i == 0)
        {
            cout << "Your divisor is:" << i;
        }
    }
}
