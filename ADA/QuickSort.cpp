/*
* file: QuickSort.cpp
*Purpose: Quick Sort implementation
*Date: March 12 ,2024
*Time: 14:54 IST
*Author: Naina Rathore
*/

#include<iostream>
using namespace std;

// Size of the array
const int ARRAY_SIZE = 10;

// Array to be sorted
int a[ARRAY_SIZE];

// Function to partition the array on the basis of pivot
int partition(int low, int high) {
    int pivot = a[high];  // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (a[j] < pivot) {
            i++;  // increment index of smaller element
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return (i + 1);
}

// QuickSort function
void quicksort(int low, int high) {
    if (low < high) {
        /* pi is partitioning index, a[p] is now
        at right place */
        int pi = partition(low, high);

        // Separately sort elements before
        // partition and after partition
        quicksort(low, pi - 1);
        quicksort(pi + 1, high);
    }
}

// Main function
int main() {
    int low = 0, high = ARRAY_SIZE - 1;
    cout << "Enter " << ARRAY_SIZE << " elements\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
        cin >> a[i];

    quicksort(low, high);
    cout << "Sorted array: ";
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << " " << a[i];
    return 0;
}