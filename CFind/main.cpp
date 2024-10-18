#include <iostream>
#include <list>
#include <iterator> // for std::distance
#include <algorithm>
#include <cassert>

int main() {

  std::list<int> lst{2, -7, -5, -10, 2, -5, 9, -8, -6, -7, -3, 2, 6, -1, 9, 5, 1, -4, -7, -9, 0, 10, 5, 3, -6, 9, 1, 8, 4, 2};

  // Find the first instance of the number 5 in the list above. Store it in an iterator 'it_5'


  // Find the first instance of the number 9 from the list above, but starting from the end.
  // Store it in an iterator 'it_9'


  /*************************************/
  /* Testing code below. Do not modify */
  /*************************************/
  assert(*it_5 == 5);
  assert(*it_9 == 9);
  assert(std::distance(lst.begin(), it_5) == 15);
  assert(std::distance(lst.rbegin(), it_9) == 4);
}