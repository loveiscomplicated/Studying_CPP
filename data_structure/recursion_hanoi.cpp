/*


#include <iostream>
using namespace std;

void move(int num_plate, int* step_ptr, char start, char end) {
  char tower[3] = {'A', 'B', 'C'};
  
  char middle;
  for (char i : tower) {
    if ((i != start) && (i != end)){
      middle = i;
    }
  }
  
  if (num_plate == 2) {
    cout << "step " << *step_ptr << ' ' << start << " -> " << middle << endl;
    *step_ptr = *step_ptr + 1;
    cout << "step " << *step_ptr << ' ' << start << " -> " << end << endl;
    *step_ptr = *step_ptr + 1;
    cout << "step " << *step_ptr << ' ' << middle << " -> " << end << endl;
  } else {
    move((num_plate - 1), step_ptr, start, middle);
    *step_ptr = *step_ptr + 1;
    cout << "step " << *step_ptr << ' ' << start << " -> " << end << endl;
    *step_ptr = *step_ptr + 1;
    move((num_plate - 1), step_ptr, middle, end);
  }
}

int main() {
  int num_plate;
  cin >> num_plate;
  
  int step = 1;
  int* step_ptr = &step;
  
  move(num_plate, step_ptr, 'A', 'C');
  return 0;
}
*/


#include <iostream>
using namespace std;

void move(int num_plate, int* step_ptr, char start, char end) {
  char tower[3] = {'A', 'B', 'C'};
  
  char middle;
  for (char i : tower) {
    if ((i != start) && (i != end)){
      middle = i;
    }
  }
  
  if (num_plate == 1) { // base case를 잘 판단하자 ! 검토받기 전까지는 num_plate == 2인 줄 알았음
    cout << "step " << *step_ptr << ' ' << start << " -> " << end << endl;
  } else {
    move((num_plate - 1), step_ptr, start, middle);
    (*step_ptr)++;
    cout << "step " << *step_ptr << ' ' << start << " -> " << end << endl;
    (*step_ptr)++;
    move((num_plate - 1), step_ptr, middle, end);
  }
}

int main() {
  int num_plate;
  cin >> num_plate;
  
  int step = 1;
  int* step_ptr = &step;
  
  move(num_plate, step_ptr, 'A', 'C');
  return 0;
}