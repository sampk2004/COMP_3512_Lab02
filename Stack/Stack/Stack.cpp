#include <iostream>
// short description verb
// PRECONDITIONS:
// POSTCONDITIONS:
// RETURN CONDITIONS:
// Stack.cpp: stores ints
// constexpr int Stack[10];
class Stack {

public:
	Stack();
	void Push(int);
	void Pop();
	const int Top();
	const bool Empty();
	const bool Full();

private:
	int stacksize[10];
	int topstack;

};

Stack::Stack() {
	topstack = -1;
}

// Pushes number to stack and increments index value
// PRECONDITIONS: Must be an int
// POSTCONDITIONS: Increment index value
// RETURN CONDITIONS: void
void Stack::Push(int number) {
	topstack++;
	stacksize[topstack] = number;
}

// Decrements the instance variable topstack
// PRECONDITIONS: No inputs, can't use pop if topstack is 0
// POSTCONDITIONS: Decrements variable topstack by one
// RETURN CONDITIONS: void
void Stack::Pop() {
	topstack--;
}
// Returns value at top of the stack
// PRECONDITIONS: No inputs
// POSTCONDITIONS: Returns int at topstack
// RETURN CONDITIONS: int 
const int Stack::Top() {
	return stacksize[topstack];
}
// Returns true if topstack is equal to -1
// PRECONDITIONS: No inputs 
// POSTCONDITIONS: Returns status of array
// RETURN CONDITIONS: bool
const bool Stack::Empty() {
	if (topstack == -1)
		return true;
	else 
		return false;
}
const bool Stack::Full() {

}

int main()
	{
	Stack *test;
	test = new Stack[10];
	test->Push(10);

	Stack *test2;
	test2 = new Stack[10];
	
	std::cout << "Testing function top on test...\n" << "Test should return 10 Output: " << test->Top() << "\n";
	
	std::cout << "Testing function empty on test...\n";
	if (!(test->Empty()))
		std::cout << "Works\n";
	else std::cout << "Fails\n";

	std::cout << "Testing function empty on test2...\n";
	if (test2->Empty())
		std::cout << "Works\n";
	else std::cout << "Fails\n";

		return 0;
	}
