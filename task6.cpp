#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int uniqueCount= 0;

    cout << "Enter 10 integers: ";
    for (int i =0; i <10; i++) {
        cin>>numbers[i];
    }

    for (int i = 0; i <10; i++) {
        bool alreadyExists = false;

        for (int j = 0; j <uniqueCount; j++) {
            if (numbers[i] == numbers[j]) {
                alreadyExists= true;
                break;
            }
        }

        if (!alreadyExists) {
            numbers[uniqueCount] =numbers[i];
            uniqueCount++;
        }
    }

    cout << "Unique values: ";
    for (int i = 0; i <uniqueCount; i++) {
        cout <<numbers[i]<< " ";
    }

    cout << endl;
    cout <<"Count = "<<uniqueCount<<endl;

    return 0;
}