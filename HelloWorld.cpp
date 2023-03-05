// We use a preprocessor directive to tell the compiler what library within the C++ Standard Library we'd like to use.
# include <iostream>

// The main function is needed to run a program. Everything in the main function is executed in the order it appears.
int main()
// We denote the start of the function block using a {.
{
	/*The std::cout function stands for 'character output' and logs the characters it receives to the console.
	The << operator allows us to 'send' characters to the character output function.
	The string "Hello World!" is being sent to the console.*/
	std::cout << "Hello world!";
	// Each statemenent must end in a semicolon (;).
	// We return a number to the OS to dictate how the program went. Returning 0 means everything went fine.
	return 0;
// Denoting the end of the function block using a }.
}