#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = n - 1; i > 1; i--) {
        swapped = false;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
        if (!swapped)  
            break;
    }
    
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
