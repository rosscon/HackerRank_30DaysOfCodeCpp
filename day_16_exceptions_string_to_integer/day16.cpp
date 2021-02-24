#include <iostream>

using namespace std;


int main(){
    string S;
    cin >> S;

    try{
        int i = stoi(S);
        cout << i << endl;
    } catch (invalid_argument const &e) {
        cout << "Bad String" << endl;
    } catch (out_of_range const &e) {
        cout << "Bad String" << endl;
    }

    return 0;
}