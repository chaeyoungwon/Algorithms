#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<vector<int>> arr(N, vector<int>(2));

    for (int i = 0; i < N; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    sort(arr.begin(), arr.end());

    for (int j = 0; j < N; j++) {
        cout << arr[j][0] << ' ' << arr[j][1] << '\n';
    }
    return 0;
}
