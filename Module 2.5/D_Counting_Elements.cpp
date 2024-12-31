#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    // Input elements of vector a
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort the vector to use adjacent_find
    sort(a.begin(), a.end());

    // Use adjacent_find to find adjacent equal elements
    auto it = adjacent_find(a.begin(), a.end());

    int count = 0;

    while (it != a.end()) {
        count++;
        // Increment the iterator to find the next pair
        it = adjacent_find(it + 2, a.end());
    }

    cout << count << endl;

    return 0;
}
