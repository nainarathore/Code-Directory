
#include <iostream>
using namespace std;

int main() {
    int mid, a[10], low = 0, high = 9, item, f = 0;

    cout << "Enter sorted values: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    cout << "Enter the element to search: " << endl;
    cin >> item;

    while (low <= high) { 
        mid = (low + high) / 2;

        if (item == a[mid]) {
            cout << "Element " << item << " found at position " << mid + 1 << endl;
            f = 1;
            break;
        } else if (item < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (!f) {
        cout << "Item not found." << endl;
    }

    return 0;
}
