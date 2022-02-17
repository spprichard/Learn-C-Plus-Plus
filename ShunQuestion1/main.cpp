#include <iostream>

using namespace std;

int main() {

    int x = 5;
    x = x++;

    cout << "1st: " << x << endl;

    x = ++x;
    cout << "2nd: " << x << endl;
}