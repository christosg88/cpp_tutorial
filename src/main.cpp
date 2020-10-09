#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec1{1, 2, 3, 4, 5};
  std::vector<int> vec2{6, 7, 8, 9, 10};
  std::vector<int> vec3(5);

  for (int i = 0; i < 5; ++i) {
    vec3[i] = vec1[i] + vec2[i];
  }

  for (int i = 0; i < 5; ++i) {
    std::cout << vec3[i] << "\n";
  }

  return 0;
}
