// C++ program to illustrate the use
// of cout object
#include <iostream>
using namespace std;

class Animal
{
	char* greeting;

public:
	Animal(char* g)
	{
		greeting = g;
	}
	void hello()
	{
		cout << greeting << endl;
	}
};

int square(int x)
{
	return x * x;
}

// Driver Code
int main()
{
	// Print standard output
	// on the screen
	cout << "Welcome to GFG " << square(5) << endl;

	char* s = "woof";
	Animal dog(s);
	s[0] = 'm';
	Animal cat(s);
	dog.hello();
	cat.hello();
	return 0;
}
