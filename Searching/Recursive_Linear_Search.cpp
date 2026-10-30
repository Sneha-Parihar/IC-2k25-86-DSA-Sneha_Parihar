#include <iostream>
using namespace std;
int findtarget(int arr[], int size, int target, int index) {
    if (size == 0)
        return -1;
    if (arr[0] == target)
        return index;
    else {
        int ans = findtarget(arr + 1, size - 1, target, index + 1);  
        return ans;
    }
}
int main() {
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array element: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the element you want search: " << endl;
    cin >> target;

    int ans = findtarget(arr, n, target, 0);                          
    if (ans != -1)
        cout << "element found at Position: " << ans+1 << endl;
    else
        cout << "element not found" << endl;
    return 0;
}
