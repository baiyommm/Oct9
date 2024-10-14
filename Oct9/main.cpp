#include <iostream>
using namespace std;

// using pointers to reverse the variables in the array

int main() {
    
    int numbers[] = {10, 20, 30, 40, 50};

    int* ptr = numbers + size(numbers) - 1;

    for (int i = 0; i < size(numbers); i++) {
        cout << *ptr << " ";
        ptr--;
    }

    cout << endl;
    
    return 0;
}
