#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    int swapCount = 0;
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
                swapCount++;
            }
        }

        // If no two elements were swapped in inner loop, then the list is already sorted.
        if (!swapped)
            break;
    }

    cout << "Number of swaps performed: " << swapCount << endl;
}

int main() {


    int n;

    // ask for the amount of numbers as input
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    // ask for the numbers
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Element at index " << i + 1 << ": ";
        cin >> arr[i];
    }

    bubbleSort(arr);

    // Display the sorted array
    cout << "Sorted array:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    //this endl is here because i find the terminal current directory info right besides the output ugly
    cout << endl;

    return 0;
}
