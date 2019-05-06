#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

string figure;
float x, y, r, area, perimeter;
float X1, X2, X3, Y1, Y2, Y3;
void circle (){
    cout << "write x, y and radius: ";
    cin >> x;
    cin >> y;
    cin >> r;
    area = M_PI * (r * r);
    perimeter = 2 * M_PI * r;
    cout << figure << "( " << x << " " << y << " , " << r << ")"
    << endl;
    cout << "\t perimetr: " << perimeter << endl;
    cout << "\t area: " << area << endl;
    
}
void triangle () {
    cout << "write X1 Y1, X2 Y2, X3 Y3 : ";
    cin >> X1;
    cin >> Y1;
    cin >> X2;
    cin >> Y2;
    cin >> X3;
    cin >> Y3;
    area =
    0.5 * (((X1 - X3) * (Y2 - Y3)) - ((Y1 - Y3) * (X2 - X3)));
    perimeter = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2)) +
    sqrt(pow((X3 - X2), 2) + pow((Y3 - Y2), 2)) +
    sqrt(pow((X3 - X1), 2) + pow((Y3 - Y1), 2));
    cout << figure << "( " << X1 << " " << Y1 << ", " << X2 << " "
    << Y2 << " , " << X3 << " " << Y3 << ")" << endl;
    cout << "\t perimetr: " << perimeter << endl;
    cout << "\t area: " << area << endl;
}
int main() {
cout << "wtire figure: ";
	cin >> figure;
	if (!strcmp(figure.c_str(), "circle")) {
        circle ();
	} else if (!strcmp(figure.c_str(), "triangle")) {
        triangle ();
	}
}
