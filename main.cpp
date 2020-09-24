#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Convert kilometers per hour to miles per hour :" << endl;
  cout << "---------------------------------------------------" << endl;

  float kmPerH;
  float milePerH;

  cout << "Introduce KM: ";
  cin >> kmPerH;

  milePerH = 1.609344 * kmPerH;

  cout << kmPerH << " km/h sunt " << milePerH << " mile/h " << endl;

  return 0;
}
