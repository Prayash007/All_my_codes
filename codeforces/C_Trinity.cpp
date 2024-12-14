#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the number of elements in the array
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Read the elements of the array
        }

        // Use a set to find distinct elements
        set<int> distinct_elements(a.begin(), a.end());
        vector<int> unique_values(distinct_elements.begin(), distinct_elements.end());

        int num_distinct = unique_values.size();

        if (num_distinct == 1) {
            // All elements are already equal
            cout << 0 << endl;
        } else if (num_distinct == 2) {
            // We can make all elements equal to one of the two
            cout << 0 << endl;
        } else if (num_distinct >= 3) {
            // Check if we can form triangles with the three smallest distinct values
            int min1 = unique_values[0];
            int min2 = unique_values[1];
            int max_value = unique_values[num_distinct - 1];

            if (min1 + min2 > max_value) {
                cout << 0 << endl; // Already satisfies triangle condition
            } else {
                cout << 1 << endl; // Need at least one operation to satisfy
            }
        }
    }

    return 0;
}