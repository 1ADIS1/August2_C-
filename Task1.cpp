#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    if (a + b > c)
    {
        if (a + c > b)
        {
            if (b + c > a)
            {
                cout << "It does exist";
            }
        }
    }
}