// 1. Object-like Macros:
#include <iostream>
using namespace std;

// Macro definition
#define DATE 31

// Driver Code
int main()
{
	// Print the message
	cout << "Lockdown will be extended"
		<< " upto " << DATE
		<< "-MAY-2020";

	return 0;
}
// Lockdown will be extended upto 31-MAY-2020

// 2. Chain Macro
#include <iostream>
using namespace std;

// Macro definition
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

// Driver Code
int main()
{
	// Print the message
	cout << "Geeks for Geeks have "
		<< INSTAGRAM << "K followers on Instagram!";

	return 0;
}
// Geeks for Geeks have 138K followers on Instagram

// 3. Multi-line Macros
#include <iostream>
using namespace std;

// Multi-line Macro definition
#define ELE 1, \
			2, \
			3

// Driver Code
int main()
{
	// Array arr[] with elements
	// defined in macros
	int arr[] = { ELE };

	// Print elements
	printf("Elements of Array are:\n");

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}
// Elements of Array are: 1 2 3

// 4. Function-like Macro
#include <iostream>
using namespace std;

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))

// Driver Code
int main()
{

	// Given two number a and b
	int a = 18;
	int b = 76;

	cout << "Minimum value between"
		<< a << " and " << b
		<< " is: " << min(a, b);

	return 0;
}
// Minimum value between 18 and 76 is 18


// Example
#include <iostream>
using namespace std;
#define PI 3.1416
#define AREA(r) (PI*(r)*(r))

int main() {
	
	float r = 7; // radius of circle
	
	cout<<"Area of Circle with radius " << r <<": "<< AREA(r);

	return 0;
}

// This code is contributed by balbiriitbombay3602

