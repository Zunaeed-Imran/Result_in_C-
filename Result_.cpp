#include <iostream>

using namespace std;

int main () {
  int number;
  cout << "Enter a number: ";
  cin >> number;
  cout << "Have Entered: " << number << endl;
  if (number >= 80) {
    cout << "You Have Earned A+";
  } 
  if (number >= 70 && number < 80) {
    cout << "You have Earned A" ;
  }

  if ( number < 33) {
    cout << "You have faield the Exam";
  }


  return 0;
}