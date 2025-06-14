#include <iostream>
#include <vector>
using namespace std;

// 삽입 정렬
void insertionSort(vector<int>& vec) {
  for (int i = 0; i < vec.size(); ++i) {
    int key = vec[i];
    int j = i - 1;

    while (j >= 0 && vec[j] > key) {
      vec[j + 1] = vec[j];
      j--;
    }

    vec[j + 1] = key;
  }
}

int main() {
  vector<int> vec = {4,2,1,5};
  insertionSort(vec);

  for (int i = 0; i < vec.size(); ++i) {
    cout << vec[i] << ' ';
  }
  cout << endl;

  return 0;
}
