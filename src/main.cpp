#include <iostream>
#include <vector>

#include "vector_math.h"

int main() {
  std::vector<int> vec1{1, 2, 3, 4, 5};
  std::vector<int> vec2{6, 7, 8, 9, 10};
  std::vector<int> vec3 = sum_vecs(vec1, vec2);

  for (int i = 0; i < 5; ++i) {
    std::cout << vec3[i] << "\n";
  }

  return 0;
}
