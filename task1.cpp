#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {2, 4, 6, 8, 10};

    cout<<"Original Array: "<<endl;
     for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout<<endl;

    //replacing 2nd number with 7
    numbers[2] = 7;
    cout<<"Array after replacing 2nd number with 7: "<<endl;


    for (int i = 0; i < 5; i++){
        cout << numbers[i] << " ";
    }
    
    cout << endl;
    return 0;
}