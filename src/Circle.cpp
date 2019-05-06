#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

float x, y, r;

void circle(float& area, float& perimeter)
{
    cout << "write x, y and radius: ";
    cin >> x;
    cin >> y;
    cin >> r;
    area = M_PI * (r * r);
    perimeter = 2 * M_PI * r;
    cout << "circle"
         << "( " << x << " " << y << " , " << r << ")" << endl;
}
