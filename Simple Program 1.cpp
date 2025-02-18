#include <iostream>
using namespace std;

double gramsToPounds(double grams) {
    return grams * 0.00220462;
}

int main() {
    double grams;
    cout << "Enter weight in grams: ";
    cin >> grams;
    cout << grams << " grams is equal to " << gramsToPounds(grams) << " pounds" << endl;
    return 0;
}