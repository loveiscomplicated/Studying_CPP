#include <iostream>
using namespace std;

// 배열의 합

double sum_arr(double arr[], int size) {
  if (size == 1) {
    return arr[0];
  } else {
    return arr[size - 1] + sum_arr(arr, (size - 1));
  }
}

int main () {
  double arr1[] = {1, 2, 3, 4, 5};  // 크기 5
  double ans = sum_arr(arr1, 5);         // 결과: 15

  cout << ans << endl;
  return 0;
}
