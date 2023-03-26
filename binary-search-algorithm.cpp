#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    // Starting point of search
    int s = 0;

    // Ending point of search
    int e = n;

    while (s <= e)
    {
        // Find the middle element of the array
        int mid = (s + e) / 2;

        // If the middle element is the key we're looking for, return its index
        if (arr[mid] == key)
        {
            return mid;
        }
        // If the middle element is greater than the key, search the left half of the array
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        // If the middle element is less than the key, search the right half of the array
        else
        {
            s = mid + 1;
        }
    }

    // If the key is not found, return -1
    return -1;
}

int main()
{
    int n;
    cin >> n;

    // Create an array of size n
    int arr[n];

    // Read n integers from the user and store them in the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    // Search for the key in the array using binary search
    int index = binarySearch(arr, n, key);

    // Print the index of the key if it is found, otherwise print -1
    cout << index << endl;

    return 0;
}
