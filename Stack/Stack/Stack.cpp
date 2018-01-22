// short description verb
// PRECONDITIONS:
// POSTCONDITIONS:
// RETURN CONDITIONS:
// Stack.cpp: stores ints
constexpr int Stack[10];

class Stack {

public:
	Stack();
	void Push(int);
	void Pop();
	const int Top();
	int const Empty();
	int const Full();

private:
	int stacksize[10];
	int topstack;

};

Stack :: Stack() {
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
// PRECONDITIONS: No inputs
// POSTCONDITIONS: Decrements variable topstack by one
// RETURN CONDITIONS: void
void Stack::Pop() {
	topstack--;
}

int main()
	{

		return 0;
	}
