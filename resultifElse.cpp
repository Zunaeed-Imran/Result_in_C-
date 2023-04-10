#include <iostream>
using namespace std;

int main () {
  int n;

  cout << "Enter Result point: ";
  cin >> n;

  if ( n >= 80 && n <= 100) {
    cout << "You got A+ ";
  }

  else if (n >= 60 && n <= 79) {
    cout << "You got A ";
  }

  else if ( n >= 33 && n <=59) {
    cout << "You got B ";
  }

  else {
    cout << "You Faield the Exam ";
  }
  return 0;
}