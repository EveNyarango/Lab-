#include <iostream>
using namespace std;
int main() {
enum {RED, YELLOW, AMBER=YELLOW, GREEN};
cout << RED << YELLOW <<AMBER << GREEN << endl;
	return 0;
}
