#include <iostream>
#include <vector>
using namespace std;

// 반복 방식 이진 탐색
int binarySearchIterative(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

// 재귀 방식 이진 탐색
int binarySearchRecursive(const vector<int>& arr, int target, int left, int right) {
    if (left > right) return -1;

    int mid = (left + right) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, target, mid + 1, right);
    else
        return binarySearchRecursive(arr, target, left, mid - 1);
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int target = 9;

    // 반복 방식 사용
    int result1 = binarySearchIterative(arr, target);
    if (result1 != -1)
        cout << "[반복] Found at index: " << result1 << endl;
    else
        cout << "[반복] Not found" << endl;

    // 재귀 방식 사용
    int result2 = binarySearchRecursive(arr, target, 0, arr.size() - 1);
    if (result2 != -1)
        cout << "[재귀] Found at index: " << result2 << endl;
    else
        cout << "[재귀] Not found" << endl;

    return 0;
}
