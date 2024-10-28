#include <iostream>
#include <vector>
#include <algorithm>

/* Write a functor that takes in an integer, and can be used to test if an integer
   is evenly-divisible by that integer.

   We can test for divisibility by using the % operator. If a % b == 0, then b evenly divides a.
*/

/**********************/
/* Write functor here */
/**********************/
class DivisibleBy {
public:
    DivisibleBy(int divisor) : divisor_(divisor) {}

    bool operator()(int number) {
        return divisor_ != 0 && number % divisor_ == 0;
    }

private:
    int divisor_;
};

int main() {

  std::vector<int> vec{-1, -4, -9, -8, -6, 8, 0, 3, -6, 8, 3, -5, 5, 5, -1, 10, 8, -8, 2, -5, 9, -4, 10, -2, 6, 2, 5, -5, -6, 10};

  /* Using the functor above, find how many values are divisible by 3, and store them in the following vector */
  std::vector<int> vec_div_by_3;

  std::copy_if(vec.begin(), vec.end(), std::back_inserter(vec_div_by_3), DivisibleBy(3));

  /*************************************/
  /* Testing code below. Do not modify */
  /*************************************/
  std::vector<int> vec_div_by_3_expected{-9, -6, 0, 3, -6, 3, 9, 6, -6};
  if(vec_div_by_3 == vec_div_by_3_expected) {
    std::cout << "Passed" << std::endl;
    return 0;
  } else {
    std::cout << "Failed" << std::endl;
    return 1;
  }
}