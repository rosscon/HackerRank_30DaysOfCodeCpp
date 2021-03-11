// hackerrank.com/challenges/30-nested-logic/problem

#include <iostream>
#include <string>

using namespace std;

int main() {
	
    int retYear;
    int retMonth;
    int retDay;

    int dueYear;
    int dueMonth;
    int dueDay;

    int fine = 0;

    scanf("%d %d %d", &retDay, &retMonth, &retYear);
    scanf("%d %d %d", &dueDay, &dueMonth, &dueYear);

    if (retYear > dueYear){
        fine = 10000;
    } else if (retYear == dueYear) {
        if (retMonth == dueMonth){
            fine = (retDay - dueDay) * 15;
        } else if (retMonth > dueMonth) {
            fine = (retMonth - dueMonth) * 500;
        }
    }


    cout << fine << endl;
	return 0;
}