#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    //outer loop iterates over each element in the vector
    for (size_t i = 0; i < arr.size() - 1; i++) {
        // assume the minimum element is at the current position
        size_t minIndex = i;

        //inner loop finds the smallest element in the unsorted part of the vector
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        //swap the found minimum element with the first element
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

//function to print a vector
void printVector(const vector<int>& arr) {
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << endl;

    //create a vector and read each element from the user
    vector<int> data(n);
    cout << "Enter " << n << " elements: ";
    for (size_t i = 0; i < n; ++i) {
        cin >> data[i];
    }

    cout << "Given array: ";
    printVector(data);

    //call the selectionSort function with the user-provided vector
    selectionSort(data);

    cout << "Sorted array: ";
    printVector(data);

    return 0;
}
