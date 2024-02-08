/* 
1. return (size()-1 = capacity); removed the -1
2. return count + 1; removed the plus 1
3. arr[rear] = size(); changed the size() to item
4. system("pause"); removed this line since it was not working
5. File structure: made 4 more files, two for classes and two for the functions
6. added extra comments since a lot of them were not clear
7. The data structure currently is an array where everytime it is getting dequeued the front is getting changed and everytime 
it is getting enqueued the rear is getting incremented so it can run out of capacity eventually though there is enough capacity
a linked list would be better for this problem
8. Algorithim is pretty effifienct since we are using arrays
*/
#include "testCases.h"

// Constructor to initialize queue


// main function
int main()
{
	// call your test functions here!
	TestCases test;
	test.testIsEmpty();
	test.testSize();
	test.testIsFull();
	test.testDequeue();
	test.testEnqueue();
	test.testPeek();
	return 0;
}

