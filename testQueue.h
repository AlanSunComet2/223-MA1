// This code was taken from https://www.techiedelight.com/queue-implementation-cpp/
// The code has been modified from the original to provide opportunities to learn

#include <iostream>
#include <cstdlib>
using namespace std;


// define default capacity of the queue
#define SIZE 10

// Class for queue
class queue
{
	int* arr;		// array to store queue elements
	int capacity;	// maximum capacity of the queue
	int front;		// front points to front element in the queue (if any)
	int rear;		// rear points to last element in the queue
	int count;		// current size of the queue

public:
	queue(int size = SIZE); 	// constructor
	~queue();   				// destructor

	int dequeue();
	int enqueue(int x);
	int peek();
	int size();
	bool isEmpty();
	bool isFull();
};


class testQueue
{
public:


	void testIsEmpty();
	void testIsFull();
	void testsize();
	void testdequeue();
	void testenqueue();
	void testpeek();
};