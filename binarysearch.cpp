#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        //check if the target is at the middle
        if (arr[mid] == target)
            return mid;

        //if target is greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;

        //if target is smaller, ignore right half
        else
            right = mid - 1;
    }

    //target not found
    return -1;
}

int main() {
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array sorted in ascending order: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result == -1)
        cout << "Element is not present in array" << endl;
    else
        cout << "Element found at position: " << result+1 << endl;
        cout << "Element index is: " << result << endl;

    return 0;
}
