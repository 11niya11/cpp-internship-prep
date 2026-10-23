
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;
    int sum = 0;
    int maximum = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << "Sum = " << sum << endl;
    cout << "Maximum = " << maximum << endl;

    return 0;
}
