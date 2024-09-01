#include<iostream>
#include<vector>
using namespace std;

// Function to partition the array and return the pivot index
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot && j>=low ) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

// Quicksort function
void quicksort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pindex = partition(arr, low, high);
        quicksort(arr, low, pindex - 1);
        quicksort(arr, pindex + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter the value of index " << i << ": ";
        cin >> arr[i];
    }

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
