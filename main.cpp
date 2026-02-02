#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;
  double area = length * width;
  double perimeter = (length * 2) + (width * 2);
  cout << "Rrectangle Properties: \n";
  cout << "Length = " << length << endl;
  cout << "Width = " << width << endl;
  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter << endl;

}