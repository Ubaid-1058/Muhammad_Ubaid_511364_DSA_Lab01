#include <iostream>
using namespace std;

void reverseArray(int numbers[], int left, int right) {
    if (left >= right) {
        return;
    }

    int temp = numbers[left];
    numbers[left] = numbers[right];
    numbers[right] = temp;

    reverseArray(numbers, left + 1, right - 1);
}

int main() {
    int numbers[6];

    cout << "Enter 6 integers: ";
    for (int i = 0; i < 6; i++) {
        cin >> numbers[i];
    }

    reverseArray(numbers, 0, 5);

    cout << "Reversed array: ";
    for (int i = 0; i < 6; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}