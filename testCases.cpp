#include "testCases.h"
/*Test ID: Empty queue check - EQC Unit:
queue::isEmpty ()
Description: test to determine if queue::isEmpty () returns 1 if a queue object is empty
Test steps:
1. Construct an empty queue object
2. Invoke queue::isEmpty ()
3. Conditionally evaluate the valued returned by queue::isEmpty ()
Test data: size = 0
Precondition: queue object is empty Postcondition: queue object is still
empty Expected result: queue is empty; 1 is returned Actual result: queue is
empty; 1 is returned Status: passed*/
void TestCases::testIsEmpty(){
    queue q;
    bool test;
    test = q.isEmpty();
    if(test == true){
        cout << "isEmpty test case when queue is empty - passed" << endl;
    }
    else{
        cout << "isEmpty test case when queue is empty - did not pass" << endl;
    }
    q.enqueue(3);
    test = q.isEmpty();
    if(test == true){
        cout << "isEmpty size test case when queue is not empty - did not pass" << endl;
    }
    else{
        cout << "isEmpty size test case when queue is not empty - passed" << endl;
    }
}
/* Test ID: Empty queue check - EQC Unit:
queue::size ()
Description: test to determine if queue::size () returns the right size
Test steps:
1. Construct an empty queue object
2. Invoke queue::size ()
3. Conditionally evaluate the valued returned by queue::size ()
Test data: size = 0
Precondition: queue object is empty Postcondition: queue object is still
empty Expected result: queue is filled; 1 is returned Actual result: queue is
filled; 1 is returned Status: passed
*/
void TestCases::testSize(){
    queue q;
    int test;
    test = q.size();
    if(test == 0){
        cout << "size() test case when queue is empty - passed" << endl;
    }
    else{
        cout << "size() test case when queue is empty - did not pass" << endl;
    }
    q.enqueue(3);
    test = q.size();
    if(test == 1){
        cout << "size() test case when queue is not empty - passed" << endl;
    }
    else{
        cout << "size() test case when queue is not empty - did not pass" << endl;
    }
}
/* Test ID: Empty queue check - EQC Unit:
queue::isFull ()
Description: test to determine if queue::isFull () returns 1 if a queue object is full
Test steps:
1. Construct a full queue object
2. Invoke queue::isFull ()
3. Conditionally evaluate the valued returned by queue::isFull ()
Test data: size = 0
Precondition: queue object is full Postcondition: queue object is still
full Expected result: queue is full; 1 is returned Actual result: queue is
full; 1 is returned Status: passed
*/
void TestCases::testIsFull(){
    queue q(5);
    bool test;
    test = q.isFull();
    if(test == false){
        cout << "isFull test case when queue is empty - passed" << endl;
    }
    else{
        cout << "isFull test case when queue is empty - did not pass" << endl;
    }
    q.enqueue(7);
    q.enqueue(4);
    q.enqueue(2);
    q.enqueue(1);
    q.enqueue(90);
    test = q.isFull();
    if(test == true){
        cout << "isFull test case when the queue is full - passed" << endl;
    }
    else{
        cout << "isFull test case when queue is not full - did not pass" << endl;
    }
}
/* Test ID: Empty queue check - EQC Unit:
queue::Dequeue ()
Description: test to determine if queue::Dequeue () returns 1 if a queue object is removed
Test steps:
1. Construct a filled queue object
2. Invoke queue::Dequeue ()
3. Conditionally evaluate the valued returned by queue::Dequeue ()
Test data: size = 0
Precondition: queue object is empty Postcondition: queue object is still
empty Expected result: queue is empty; 1 is returned Actual result: queue is
empty; 1 is returned Status: passed
*/
void TestCases::testDequeue(){
    queue q(1);
    q.enqueue(1);
    q.dequeue();
    if(q.isEmpty() == true){
        cout << "dequeue() test case - passed" << endl;
    }
    else{
        cout << "dequeue() test case - did not pass" << endl;
    }
    queue n(5);
    n.enqueue(4);
    n.enqueue(7);
    n.enqueue(8);
    n.dequeue();
    if(n.size() == 2){
        cout << "dequeue() test case size - passed" << endl;
    }
    else{
        cout << "dequeue() test case size - did not pass" << endl;
    }
    //this will exit the program since the queue is empty
    q.dequeue();
}
/* Test ID: Empty queue check - EQC Unit:
queue::Enqueue ()
Description: test to determine if queue::Enqueue () returns 1 if a queue object is filled
Test steps:
1. Construct an empty queue object
2. Invoke queue::Enqueue ()
3. Conditionally evaluate the valued returned by queue::Enqueue ()
Test data: size = 0
Precondition: queue object is empty Postcondition: queue object is filled
Expected result: queue is filled; 1 is returned Actual result: queue is
filled; 1 is returned Status: passed
*/
void TestCases::testEnqueue(){
    queue q(1);
    q.enqueue(1);
    if(q.size() == 1){
        cout << "enqueue() test case - passed" << endl;
    }
    else{
        cout << "enqueue() test case - did not pass" << endl;
    }
    //this is going to exit program since the queue is full
    q.enqueue(3);
}
/* Test ID: Empty queue check - EQC Unit:
queue::peek ()
Description: test to determine if queue::peek () returns 1 if a queue object is returned
Test steps:
1. Construct an empty queue object
2. Invoke queue::peek ()
3. Conditionally evaluate the valued returned by queue::peek ()
Test data: size = 0
Precondition: queue object is empty Postcondition: queue object is filled
Expected result: one object is returned; 1 is returned Actual result: object is
returned; 1 is returned Status: passed
*/
void TestCases::testPeek(){
    queue q(1);
    q.enqueue(4);
    if(q.peek() == 4){
        cout << "peek() test case - passed" << endl;
    }
    else{
        cout << "peek() test case - did not pass" << endl;
    }
    q.dequeue();
    //this will exit the program since the queue is empty
    q.peek();
}