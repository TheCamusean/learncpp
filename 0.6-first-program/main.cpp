#include <iostream>

int main(void) {
  using namespace std;
  cout << "hello world!" << endl;

  std::cin.clear(); // reset any error flags
 std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
 std::cin.get(); // get one more char from the user

  return 0;
}
