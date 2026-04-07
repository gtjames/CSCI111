#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b; // ascending order
}
int main() {
    int *numbers;
    int count;

    cin >> count;
    numbers = new int[count];
        // int arr[n];
        for (int i = 0; i < count; i++) {
            cin >> numbers[i];
    }

    // Sort the array
    qsort(numbers, count, sizeof(int), compare);
    
    // sort(numbers, numbers + count);
 
    // Sum odd and even positions
    int oddSum = 0, evenSum = 0;
    
    for (int i = 0; i < count; i++) {
        if (i % 2 == 0) {
            evenSum += numbers[i];
        } else {
            oddSum += numbers[i];
        }
    }
    cout << endl;
    cout << oddSum << " " << evenSum << endl;

    int index = 0;

    int sum = accumulate(numbers, numbers + count, 0,
        [&index](int acc, int x)
        {
            if (index % 2 == 0)
                acc += x;

            index++;
            return acc;
        });

    cout << "Sum of even indices: " << sum << endl;

    return 0;
}
