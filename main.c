#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

string figure;
float x, y, r;
int main() {
	cout << "wtire figure: ";
	cin >> figure;
	cout << "write x, y and radius: ";
	cin >> x;
	cin >> y;
	cin >> r;
	cout << figure << "( " << x << " " << y << " , " << r << ")" << endl;
}
