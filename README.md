# Dynamic Memory Allocation in C++

A basic C++ program demonstrating dynamic memory allocation using `new` and `delete` operators and best practices for avoiding memory leaks.

## Description

This program illustrates how to allocate memory dynamically for an integer variable during runtime using the `new` operator. It then demonstrates how to access and modify the value stored at the allocated memory address. Finally, the program showcases how to properly deallocate memory using `delete` and set the pointer to `nullptr` to prevent dangling pointers. 

### Key Features
- Dynamic memory allocation with `new`
- Accessing and using dynamically allocated memory
- Memory deallocation with `delete`
- Preventing dangling pointers using `nullptr`

## Code Explanation

```cpp
#include <iostream>
using namespace std;

int main() {
    int *pnt = new int; // Allocate memory for an integer
    *pnt = 10; // Assign a value to the allocated memory

    cout << "Value at pointer pnt: " << *pnt << endl; // Output the value

    delete pnt; // Free the allocated memory
    pnt = nullptr; // Set pointer to nullptr to avoid dangling pointer

    return 0;
}
