#include <iostream>

using namespace std;

int main() {
  int food = 10;
  cout << food << endl;
  cout << &food << endl;

  int* food_ptr = &food;
  cout << food_ptr << endl;
  cout << *food_ptr << endl;
  return 0;
}