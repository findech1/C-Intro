#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    float numbers[SIZE];
    float sum = 0;

    // Input loop: Get numbers from index 0 to 5
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    float average = sum / SIZE;

    // Output the average
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
