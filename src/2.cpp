// C++ program to demonstrate the use of arrays in C++

#include <iostream>
using namespace std;

int main() {
    // declaring an array of integers
    int arr[5];

    // initializing the elements of the array
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    // printing the elements of the array
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
