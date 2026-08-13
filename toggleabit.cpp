#include <iostream>
using namespace std;
int main() {
    int n = 10; 
    int pos = 1;
    n = n ^ (1 << pos);
    cout << n << endl;
    return 0;
}
