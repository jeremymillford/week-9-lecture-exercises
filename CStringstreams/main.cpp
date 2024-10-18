#include <iostream>
#include <cassert>

/* Tokenizing a string with stringstreams

  One thing stringstreams are used for is for splitting a string
  into chunks ("tokenizing").

  Given a string, you can create a stringstream from it, then
  use the stream extraction operator to extract pieces of it. This
  can also extract the pieces as particular data types (int, string) just
  like reading from a file.

  To create a stringstream from a string, just pass the string to the constructor
  of the stringstream
*/

int main() {

  /* Create a stringstream from the following string */
  std::string str = "Word 20 3.1415";

  /*
  Extract the word as a string, the integer as an int,
  and the floating point decimal as a double
  Remember to include the proper header!
  */
  std::string word;
  int i;
  double d;

  /*************************************/
  /* Testing code below. Do not modify */
  /*************************************/
  assert(word == "Word");
  assert(i == 20);
  assert(d == 3.1415);
}