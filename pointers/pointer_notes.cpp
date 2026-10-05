#include <iostream>
using namespace std;

void foo(int& x) {
  int* p = &(x); // <- stores the memory of x
  cout << p << endl;   // prints value of p (x's memory address)
  cout << *p << endl;  // prints out the value of the DATA that p is holding (5) 
                        // (called dereferencing p)
}

int main() {
  int x = 5;
  foo(x); // pass by REFERENCE
}

// -----------------------------

void foo() {
  int* p = new int{10}; /* - allocate space on the stack for a pointer to an integer p
                           - allocate space on the heap for an integer and load the value 10 into that space
                           - load the memory address where the new integer is located into p
                        */
  cout << p << endl;   // rarely wanted
  cout << *p << endl;  // more useful
  // uh oh... memory leak!
    /*  The memory for p will be deallocated automatically when it is
        no longer in scope (e.g. at the end of the function), 
        the memory for x remains allocated. The memory for the integer
        it created remains allocated (you have to explicitly deallocate this!).
    */
}

int main() {
  foo();
}