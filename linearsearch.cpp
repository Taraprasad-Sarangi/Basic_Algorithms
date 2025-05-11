#include <iostream>
using namespace std;

void linearSearch(int arr[], int target, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Target value found at index: " << i << endl;
            cout << "Target value position in list is: " << i+1 << endl;
            return;
        }
    }
    cout << "Target value not found";
}

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << endl;

    int arr[n];

    cout << "Enter the elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Enter the target value: ";
    cin >> target;

    linearSearch(arr, target, n);

    return 0;
}
