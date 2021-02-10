//https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

const vector<string> explode(const string& s, const char& c) {
	string buff{""};
	vector<string> v;
	
	for(auto n:s){
		if(n != c) buff+=n; else
		if(n == c && buff != "") { 
            v.push_back(buff); buff = ""; 
        }
	}
	if(buff != "") v.push_back(buff);
	
	return v;
}

int main() {

    map<string, string> phonebook;

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        vector<string> split = explode(line, ' ');
        string key = split[0];
        string value = split[1];

        phonebook[key] = value;
    }

    string name;
    while(cin >> name) {
        if (phonebook.find(name) != phonebook.end()) {
            cout << name << "=" << phonebook.find(name)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}