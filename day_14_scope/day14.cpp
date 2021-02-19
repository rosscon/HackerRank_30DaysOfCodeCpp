#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	public:
        Difference(vector<int> elements){
            this->elements = elements;
        }

    public:
        void computeDifference(){
            int min = 200;
            int max = 0;

            for (vector<int>::iterator it = this->elements.begin(); it != this->elements.end(); ++it){
                int value = *it;
                if (value > max)
                    max = value;
                if (value < min)
                    min = value;
            }
            

            this->maximumDifference = max - min;
        }

};

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}