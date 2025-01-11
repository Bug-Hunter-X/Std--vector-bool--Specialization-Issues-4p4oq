#include <vector>
#include <iostream>

int main() {
  // Safer alternative using std::vector<int>
  std::vector<int> vec;
  vec.push_back(1); // True represented by 1
  vec.push_back(0); // False represented by 0
  if (!vec.empty()) {
    bool b = (vec[0] != 0); // Accessing after checking for emptiness
    std::cout << b << std::endl; 
  } else {
    std::cout << "Vector is empty" << std::endl; 
  }
  return 0;
} 