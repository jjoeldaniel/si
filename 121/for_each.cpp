#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {

  // same thing
  std::vector vec{17, 50, 3, 8, 104};

  vec[0] = 5;
  vec.at(0) = 5;

  // same thing
  int x{10};
  int y = 10;

  /* for (int i = 0; i < vec.size(); i++) { */
  /*   int x = vec.at(i); */
  /*   cout << x << endl; */
  /* } */
  /**/
  /* for (int i : vec) { */
  /*   cout << i << endl; */
  /* } */

  // vec = [17, 50, 3, 8, 104]
  cout << vec[vec.size()] << endl;
  cout << vec.at(vec.size()) << endl;

  return 0;
}
