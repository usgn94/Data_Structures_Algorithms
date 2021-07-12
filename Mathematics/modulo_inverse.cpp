/*
ax + by = gcd(a, b)
To find multiplicative inverse of ‘a’ under ‘m’, we put b = m in above formula. Since we know that a and m are relatively prime, we can put value of gcd as 1.

ax + my = 1
If we take modulo m on both sides, we get

ax + my ≅ 1 (mod m)
We can remove the second term on left side as ‘my (mod m)’ would always be 0 for an integer y. 

ax  ≅ 1 (mod m)
*/

// C++ program to find multiplicative modulo
// inverse using Extended Euclid algorithm.
#include <iostream>
using namespace std;

// Function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int* x, int* y);

// Function to find modulo inverse of a
void modInverse(int a, int m)
{
	int x, y;
	int g = gcdExtended(a, m, &x, &y);
	if (g != 1)
		cout << "Inverse doesn't exist";
	else
	{
		
		// m is added to handle negative x
		int res = (x % m + m) % m;
		cout << "Modular multiplicative inverse is " << res;
	}
}

// Function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int* x, int* y)
{
	
	// Base Case
	if (a == 0)
	{
		*x = 0, *y = 1;
		return b;
	}
	
	// To store results of recursive call
	int x1, y1;
	int gcd = gcdExtended(b % a, a, &x1, &y1);

	// Update x and y using results of recursive
	// call
	*x = y1 - (b / a) * x1;
	*y = x1;

	return gcd;
}

// Driver Code
int main()
{
	int a = 3, m = 11;

	// Function call
	modInverse(a, m);
	return 0;
}

// This code is contributed by khushboogoyal499
