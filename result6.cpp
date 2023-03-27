#include <iostream>

using namespace std;

int main () {
  int Number;
  cout << "Enter The Number of Result Point: ";
  cin >> Number;

  if (Number >= 80 && Number <= 100) {
    cout << "You have Earned A+ ";
  }

  if (Number >= 70 && Number <= 79) {
    cout << "You Have Earned A- ";
  }

  if (Number >= 60 && Number <= 69) {
    cout << "You Have Earned A ";
  }

  if (Number >= 50 && Number <= 59) {
    cout << "You Have Earned B ";
  }

  if (Number >= 33 && Number <=49) {
    cout << "You Have Passed the Test ";
  }

  if (Number >= 1 && Number <= 32) {
    cout << "You Have Faield";
  }
  return 0;
}