#include <iostream>
#include <vector>
#include <utility>


/*
최대 / 최소를 선택해서 앞으로 빼기
*/

void selectionSort(std::vector<int>& vec) {
  for (int i = 0; i < vec.size() - 1; ++i) {
    int min = i;
    for (int j = i + 1; i < vec.size(); ++j) {
      if (vec[min] > vec[j]) {
        min = j;
      }
    }
    if (min != i) {
      std::swap(vec[min], vec[i]);
    }
  }
}

int main() { 

}