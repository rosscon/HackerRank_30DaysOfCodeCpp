// https://www.hackerrank.com/challenges/30-2d-arrays/problem

#include <bits/stdc++.h>

using namespace std;



int main() {

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int max = -1000000;

    for (int y = 0; y < 4; y++) {
        for (int x = 0; x < 4; x++) {

            int total = arr[y][x] + arr[y][x + 1] + arr[y][x + 2];
            total = total + arr[y + 1][x + 1];
            total = total + arr[y + 2][x] + arr[y + 2][x + 1] + arr[y + 2][x + 2];

            if (total > max) {
                max = total;
            }
        }
    }


    cout << max << endl;

    return 0;
}