#include<iostream>
using namespace std;

int main() {
    int *pnt = new int; // Allocate memory for an integer
    *pnt = 10; // Assign a value to the allocated memory

    cout << "Value at pointer pnt: " << *pnt << endl; // Output the value

    delete pnt; // Free the allocated memory
    pnt = nullptr; // Set pointer to nullptr to avoid dangling pointer

    return 0;
}