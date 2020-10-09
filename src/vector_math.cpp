#include <vector>

std::vector<int> sum_vecs(std::vector<int> const &vec1, std::vector<int> const &vec2) {
  size_t size = vec1.size();

  std::vector<int> vec3(size);
  for (int i = 0; i < size; ++i) {
    vec3[i] = vec1[i] + vec2[i];
  }

  return vec3;
}

