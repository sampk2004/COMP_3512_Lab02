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

private:
	int stacksize[10];
	int topstack;

};

Stack :: Stack() {
	topstack = -1;
}
// Pushes number to stack and increments index value
// PRECONDITIONS: Must be an int
// POSTCONDITIONS: Hould increment index value
// RETURN CONDITIONS: void
void Stack::Push(int number) {
	topstack++;
	stacksize[topstack] = number;
}
	
int main()
	{

		return 0;
	}
