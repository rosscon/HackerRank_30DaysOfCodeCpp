#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int T, data;
    cin >> T;
    while (T-- > 0)
    {
        cin >> data;

        if (data == 1)
        {
            cout << "Not prime" << endl;
        }
        else
        {
            bool prime = true;
            for (int i = 2; i*i <= data; i++){
                //if divisible
                if (data % i == 0){
                    cout << "Not prime" << endl;
                    prime = false;
                    break;
                }
            }

            if (prime)
            {
                cout << "Prime" << endl;
            }
            
        }
    }

    return 0;
}