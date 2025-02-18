#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double diameter, radius, area;

  cout << "Enter the diameter of the circle: ";
  cin >> diameter;

  if (diameter <= 0) {
    cout << "Error: Diameter must be a positive value." << endl;
    return 1; 
  }
  
  radius = diameter / 2.0;
  area = M_PI * pow(radius, 2);

  cout << "The area of the circle is: " << area << endl;
  return 0;
}

