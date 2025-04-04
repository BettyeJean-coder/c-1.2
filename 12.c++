#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
    vector<int> userInts;
    int num;

    while (cin >> num && num >= 0) {
        userInts.push_back(num); 

    }

    if (userInts.size() >9) {
        cout << "Too many numbers" << endl;
    } else {
        int middleIndex = userInts.size() / 2;
        cout << "Middle item: " << userInts[middleIndex] << endl; 
    }


   return 0;
}
