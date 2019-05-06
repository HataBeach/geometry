#include "Triangle.h"

float X1, X2, X3, Y1, Y2, Y3;
void triangle(float &area, float &perimeter)
{
    cout << "write X1 Y1, X2 Y2, X3 Y3 : ";
    cin >> X1;
    cin >> Y1;
    cin >> X2;
    cin >> Y2;
    cin >> X3;
    cin >> Y3;
    area = 0.5 * (((X1 - X3) * (Y2 - Y3)) - ((Y1 - Y3) * (X2 - X3)));
    perimeter = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2))
                + sqrt(pow((X3 - X2), 2) + pow((Y3 - Y2), 2))
                + sqrt(pow((X3 - X1), 2) + pow((Y3 - Y1), 2));
    cout << "triangle"
         << "( " << X1 << " " << Y1 << ", " << X2 << " " << Y2 << " , " << X3
         << " " << Y3 << ")" << endl;
}
