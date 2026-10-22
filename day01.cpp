
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 8, 2, 10, 6};
    int n = 5;

    // Find the maximum element
    int maxElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Maximum element: " << maxElement << endl;
    return 0;
}
