// Name:
// Date:

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   int X, Y, N;
   cin >> X;
   cin >> Y;
   cin >> N;

   for (int i = 1; i <= N; i++) {
	   if (i % X == 0) {
		   cout << "Fizz\n";
	   }
	   else if (i % Y == 0) {
		   cout << "Buzz\n";
	   }
	   else if (i % X == 0 && i % Y == 0) {
		   cout << "FizzBuzz\n";
	   }
	   else {
		   cout << i << "\n";
	   }
   }
}

