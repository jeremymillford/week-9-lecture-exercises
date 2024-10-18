#include <iostream>
#include <fstream>
#include <cassert>

/* One common task is to read in coordinates from a file. In this exercise, you
   will read in information for a single atom from an external file.
*/

// A single atom with coordinates */
struct Atom
{
  std::string symbol;
  double x;
  double y;
  double z;
};



int main() {

  /***************************************************/
  /* Read in the atom information from test_data.xyz */
  /* into an Atom object called "atom"               */
  /***************************************************/


  /*************************************/
  /* Testing code below. Do not modify */
  /*************************************/
  assert(atom.symbol == "B");
  assert(atom.x == -4.7);
  assert(atom.y == -0.65);
  assert(atom.z == -1.11);
}