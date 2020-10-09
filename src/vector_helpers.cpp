#include <iostream>
#include <vector>

void print_vec(std::vector<int> const &vec) {
  size_t size = vec.size();
  for (int i = 0; i < size; ++i) {
    std::cout << vec[i] << "\n";
  }
}
