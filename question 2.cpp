/*
Question #2

Write a function named sumTo() that takes an integer parameter named value, 
and returns the sum of all the numbers from 1 to value.

For example, sumTo(5) should return 15, which is 1 + 2 + 3 + 4 + 5.

Hint: Use a non-loop variable to accumulate the sum as you iterate from 1 to the input value, much like the pow() 
example above uses the total variable to accumulate the return value each iteration.
*/

#include <iostream>

int sumTo(int counter)
{
	int totalam{ 0 }; // create value for adding things together and printing number at the end
	for (int i{ 1 }; i <= counter; ++i) // I gets put into local scope (for) the forloop
	{
		totalam += i; // icriment total amount by I
		std::cout << "+" << i; // output a "+" and I
	}
	std::cout << "="; // out put =
	std::cout << totalam; // output the end value of I added into it self however manytimes the user sets it
	return totalam;// returns ^
}

int main()
{
	bool run = true;
	while (run == true) // constantly run program begin 
	{ 
		int x{};
		std::cin >> x;
		sumTo(x);
		std::cout << '\n'; 
	} // end
}
