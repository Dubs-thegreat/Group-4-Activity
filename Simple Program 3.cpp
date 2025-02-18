#include <iostream>
using namespace std;

int main() {
 double distance, time, speed;

 cout << "Enter distance traveled (in kilometers): ";
 cin >> distance;

 cout << "Enter time taken (in hours): ";
 cin >> time;

 if (time != 0) {
 speed = distance / time;
 cout << "The speed of the car is " << speed << " km/h" << endl;
 } else {
 cout << "Time cannot be zero!" << endl;
 }
 return 0;
}