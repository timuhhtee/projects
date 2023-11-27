#include <iostream>

using namespace std;

int main() {
  int age = 0;
  char choice;
  // Prompt user for age
  cout << "How old are you (in years)?" << endl;
  // Get user's age
  cin >> age;
  if (cin.fail()) {
    cout << "Invalid input." << endl;
    return 0;
  }
  if (age == 0) {
    cout << "You cannot be 0 years old! Try again." << endl;
    return 0;
  } else if (age == 1) {
    cout << "You are " << age << " year old. Correct? (y/n)" << endl;
  } else {
    cout << "You are " << age << " years old. Correct? (y/n)" << endl;
  }
  // Confirm age
  cin >> choice;
  switch (choice) {
  case 'y':
    cout << "Great! Let's get started." << endl;
    break;
  case 'n':
    cout << "Got it. Try again." << endl;
    return 0;
    break;
  default:
    cout << "Invalid input." << endl;
    return 0;
  }
  // Give user their recommended hours of sleep
  if (age <= 2) {
    cout << "You should be sleeping for roughly 11-14 hours per day." << endl;
  } else if (age <= 5) {
    cout << "You should be sleeping for roughly 10-13 hours per day." << endl;
  } else if (age <= 12) {
    cout << "You should be sleeping for roughly 9-12 hours per day." << endl;
  } else if (age <= 18) {
    cout << "You should be sleeping for roughly 8-10 hours per day." << endl;
  } else {
    cout << "You should be sleeping for roughly 7 or more hours per day."
         << endl;
  }
  return 0;
}