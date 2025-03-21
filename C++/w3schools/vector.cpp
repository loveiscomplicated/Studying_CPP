#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
  vector<int> nums = {1, 101, 12};

  // cout << nums << endl; 이건 아예 오류임 array와 마찬가지로 이거 자체를 출력하는 방법을 모름
  // tip - 오류를 고쳤는데도 아직 안 고쳐졌다고 메시지가 뜨면 빌드를 다시 해보자 (컨트롤 쉬프트 B)
  // 이전에 빌드한 기계어 파일을 여전히 참조하고 있어서 그런 것

  for (int num : nums) {
    cout << num << ' ';
  }

  
  return 0;
}