#include <iostream>
#include <vector>
#include <cassert>

/* In this exercise, you copy the first 10 elements of a vector to another vector, and then
   fill the remainder of the vector with 0
*/


int main() {

  std::vector<int> vec_1{-4, -9, -7, 7, 5, 5, -9, -3, 8, 10, -9, -10, -10, -4, -10, 6, -5, 3, -5, 9};

  std::vector<int> vec_2{8, 1, -1, -3, -2, -5, 2, -6, 1, -9, -10, 6, -3, 8, -8, -8, -6, -4, 9, -6};
  
  /*******************************************************************/
  /* Copy the first 10 elements of vec_1 into the beginning of vec_2 */
  /*******************************************************************/

  /*******************************************/
  /* Fill the remainder of vec_2 with 0      */
  /*******************************************/

  /*************************************/
  /* Testing code below. Do not modify */
  /*************************************/
  if(vec_2 == std::vector<int>{-4, -9, -7, 7, 5, 5, -9, -3, 8, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}) {
    std::cout << "Passed" << std::endl;
    return 0;
  } else {
    std::cout << "Failed" << std::endl;
    return 1;
  }
}