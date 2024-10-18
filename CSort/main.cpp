#include <iostream>
#include <vector>
#include <cassert>

int main() {

  std::vector<int> vec{-9, 10, -4, -7, 2, 0, -4, 4, 2, -3, 6, -2, 6, 9, -9, -9, 5, 3, -4, -10, -3, -8, 4, 4, -1, 9, -4, 7, 1, 10};

  // Sort the above list in-place
  // Remember to include the proper header!


  /**************************************/
  /* Testing code below. Do not modify! */
  /**************************************/
  std::vector<int> vec_expected{-10, -9, -9, -9, -8, -7, -4, -4, -4, -4, -3, -3, -2, -1, 0, 1, 2, 2, 3, 4, 4, 4, 5, 6, 6, 7, 9, 9, 10, 10};

  if(vec == vec_expected) {
    std::cout << "Passed" << std::endl;
    return 0;
  } else {
    std::cout << "Failed" << std::endl;
    return 1;
  }

}