#include "Circle.h"
#include "Triangle.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
string figure;
float area=0, perimeter=0;
int main()
{
    cout << "wtire figure: ";
    cin >> figure;

    if (!strcmp(figure.c_str(), "circle")) {
        circle(area,perimeter);
    } else if (!strcmp(figure.c_str(), "triangle")) {
        triangle(area,perimeter);
    }
    cout << "\t perimetr: " << perimeter << endl;
    cout << "\t area: " << area << endl;
}
