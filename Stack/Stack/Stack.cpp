#include <iostream>

constexpr int max_size{ 10 };

// Stack.cpp: stores ints
class Stack {

public:
	Stack();
	void Push(int);
	void Pop();
	const int Top();
	const bool Empty();
	const bool Full();
	const void Print();

private:
	int stacksize[max_size];
	int topstack;

};

Stack::Stack() 
{
	topstack = -1;
}

// Pushes number to stack and increments index value
// PRECONDITIONS: Must be an int
// POSTCONDITIONS: Increment index value
// RETURN CONDITIONS: void
void Stack::Push(int number) 
{

	if (topstack < max_size - 1) {
		topstack++;
		stacksize[topstack] = number;
	}
	else 
		std::cout << "exceeded maximum size\n";
}

// Decrements the instance variable topstack
// PRECONDITIONS: No inputs
// POSTCONDITIONS: Decrements variable topstack by one
// RETURN CONDITIONS: void
void Stack::Pop() 
{
	if(topstack >= 0)
		topstack--;
}

// Returns value at top of the stack
// PRECONDITIONS: No inputs
// POSTCONDITIONS: Returns int at topstack
// RETURN CONDITIONS: int 
const int Stack::Top() 
{
	return stacksize[topstack];
}

// Returns true if topstack is equal to -1
// PRECONDITIONS: No inputs, assumes pop has not been used
// POSTCONDITIONS: Returns status of array
// RETURN CONDITIONS: bool
const bool Stack::Empty() 
{
	if (topstack == -1)
		return true;
	else 
		return false;
}

// Returns true if topstack is equal to 9
// PRECONDTIONS: No inputs, assumes pop has not been used
// POSTCONDITIONS: Returns status of array
// RETURN CONDITIONS: bool
const bool Stack::Full() 
{
	if (topstack == 9)
		return true;
	else
		return false;
}

// Returns the contents of the stack
// PRECONDITIONS: assumes pop has not been used
// POSTCONDITIONS: prints array
// RETURN CONDITIONS: returns print statements
const void Stack::Print() 
{
	if (topstack < 1) {
		std::cout << "stack is empty";
	}
	for (int x = topstack; topstack >= 0; Pop()) {
		std::cout << "At index: " << topstack << " value: " << stacksize[topstack] << "\n";
	}
}
int main()
{
	Stack *test;
	test = new Stack;
	Stack *test2;
	test2 = new Stack;
	Stack *test3;
	test3 = new Stack;

	for (int x = 0; x < 12; x++) {
		test->Push(x);
		if (x < 5) {
			test3->Push(x);
		}
	}
	
	std::cout << "Testing function top on test...\n" << "Test should return 9 Output: " << test->Top() << "\n";
	
	std::cout << "Testing function empty on test...\n";
	if (!(test->Empty()))
		std::cout << "Works\n";
	else std::cout << "Fails\n";

	std::cout << "Testing function empty on test2...\n";
	if (test2->Empty())
		std::cout << "Works\n";
	else std::cout << "Fails\n";

	std::cout << "Testing function Full on test...\n";
	if (test->Full())
		std::cout << "Works\n";
	else std::cout << "Fails\n";

	std::cout << "Testing function Full on test2...\n";
	if (!(test2->Full()))
		std::cout << "Works\n";
	else std::cout << "Fails\n";

	std::cout << "Testing print on test:... \n";
	test->Print();
	std::cout << "Testing print on test3:... \n";
	test3->Print();

		return 0;
}
