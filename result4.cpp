#include <iostream>
using namespace std;

int main () {
  int num;
  cout << "Enter a Number of Result: ";
  cin >> num;

  if ( num >=80 ) {
    cout << "You Have Earned A+ ";
  }

  if (num >=70 && num <=79) {
    cout << "You have earned A ";
  }

  if (num >=60 && num <=69) {
    cout << "You have Earned A- ";
  }

  if (num >=50 && num <=59) {
    cout << "You have Earned B+ ";
  }

  if (num >=33 && num <=49) {
    cout << "You Have Passed the Exam ";
  }

  if (num >=1 && num <=32) {
    cout << "You Have Faield the Exam ";
  }

  return 0;
}
