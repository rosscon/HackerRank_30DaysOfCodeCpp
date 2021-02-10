// https://www.hackerrank.com/challenges/30-review-loop/problem

#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < N; i++){
        
        string line;
        getline(cin, line);

        string odd = "";
        string even = "";

        for(int j = 0; j < line.size(); j++){
            if (j % 2 == 0) {
                even += line[j];
            } else {
                odd += line[j];
            }
        }

        cout << even << " " << odd << endl;
    }

    return 0;
}