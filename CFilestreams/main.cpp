#include <iostream>
#include <fstream>
#include <vector>

/* One common task is to read in coordinates from a file. In this exercise, you
   will read in information for a single atom from an external file. We will
   expand on this in the problem set
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
  std::cout << atom.symbol << " " << atom.x << " " << atom.y << " " << atom.z << std::endl;
}