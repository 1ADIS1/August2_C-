#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;
    float area = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;


    area = 0.5 * abs((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3));
    cout << "The area is: " << area;
}
