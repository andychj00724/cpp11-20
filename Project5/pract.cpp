#include <iostream>
using namespace std;
int big(int a, int b) {

	if (a <= b)
		return b;
	else
		return a;

}
int big(int a, int b, int c) {

	if ((a >= b) && (a >= c))
		return a;
	else if ((b >= a) && (b >= c))
		return b;
	else
		return c;

}
int main() {

	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
	return 0;


}