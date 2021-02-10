// https://www.hackerrank.com/challenges/30-binary-numbers/problem
#include <bits/stdc++.h>
#include <string>

using namespace std;

// function to convert decimal to binary 
string convertToBinary(int n) { 
    int binary[32]; 
  
    int i = 0; 
    while (n > 0) { 
        binary[i] = n % 2; 
        n = n / 2; 
        i++; 
    }   

    string binOut = "";
    for (int j = i - 1; j >= 0; j--){
        binOut += to_string(binary[j]); 
    }
    
    return binOut;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string binaryString = convertToBinary(n);

    int maxSeq = 0;
    int currSeq = 0;

    for (char c: binaryString){
        if (c == '1'){
            currSeq ++;
            if (currSeq > maxSeq){
                maxSeq = currSeq;
            }
        } else {
            currSeq = 0;
        }
    }

    cout << maxSeq << endl;

    return 0;
}