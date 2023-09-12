#include <iostream>
#include "ArrayFunctions.h"

using namespace std;

int main() {
    int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = 10;
    int index;
    int myNum;

    cout << "Enter element (1-10): \n";
    cin >> myNum;

    // Search for the element in the array
    index = ArrayFunctions::searchArray(numbers, size, myNum);

    if (index != -1) {
        cout << myNum << " is at index " << index << endl;
    }
    else {
        cout << "is not in the array" << endl;
    }

    int newIndex;
    int newValue;

    cout << "Enter index to modify (0-9): \n";
    cin >> newIndex;

    if (newIndex >= 0 && newIndex < size) {
        cout << "Enter new value: \n";
        cin >> newValue;

        // Modify the value at the specified index and get the old and new values
        pair<int, int> result = ArrayFunctions::modifyValue(numbers, size, newIndex, newValue);
        cout << "Old value: " << result.first << ", New value: " << result.second << endl;
    }
    else {
        cout << "Invalid index." << endl;
    }

    int numToAdd;

    cout << "Enter integer to add to the end of the array: \n";
    cin >> numToAdd;

    // Add the integer to the end of the array
    ArrayFunctions::addInteger(numbers, size, numToAdd);

    int indexToRemove;

    cout << "Enter index (0-9) to remove or replace with 0: \n";
    cin >> indexToRemove;

    if (indexToRemove >= 0 && indexToRemove < size) {
        int newValue;
        cout << "Enter new value (0 to remove): \n";
        cin >> newValue;

        // Replace or remove the integer at the specified index
        ArrayFunctions::replaceOrRemove(numbers, size, indexToRemove, newValue);
    }
    else {
        cout << "Invalid index." << endl;
    }

    // Print the updated array
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
