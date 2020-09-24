#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Convert kilometers per hour to miles per hour :" << endl;
  cout << "---------------------------------------------------" << endl;

  float kmPerH;
  float milePerH;

  cout << "Introduce mile ";
  cin >> kmPerH;

  milePerH = 1.609344 * kmPerH;

  cout << milePerH << " mile/h sunt " << kmPerH << " km/h " << endl;

  return 0;
}
