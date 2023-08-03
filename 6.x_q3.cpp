#include <iostream>


int accumulate(int x) {
	static int sum{};
/* ORIGINAL 
  sum = x+x
  return sum
  
*/

  // Code from help 
  sum += x;
	return sum;

}




int main() {

	std::cout << accumulate(4) << '\n'; // print 4
	std::cout << accumulate(3) << '\n'; // print 7
	std::cout << accumulate(2) << '\n';// print 9
	std::cout << accumulate(1) << '\n';  // print 10 

}

