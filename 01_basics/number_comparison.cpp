#include <iostream>
#include <algorithm> // for sort()
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Finding largest and smallest
    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;

    int smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    // Sorting in ascending and descending order
    int nums[3] = {a, b, c};
    sort(nums, nums + 3);

    cout << "Ascending order: " << nums[0] << ", " << nums[1] << ", " << nums[2] << endl;
    cout << "Descending order: " << nums[2] << ", " << nums[1] << ", " << nums[0] << endl;

    // Check for arithmetic sequence: difference should be same
    if ((nums[1] - nums[0] == nums[2] - nums[1])) {
        cout << "The numbers form an Arithmetic Sequence." << endl;
    } else {
        cout << "The numbers do NOT form an Arithmetic Sequence." << endl;
    }

    return 0;
}
