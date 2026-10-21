#include <iostream>
using namespace std;
int main()
{
    cout << "Hello, World!" << endl;

    cout << "This line will not be executed." << endl;
    cout << 1 + 1 << endl;
    cout << "I am faulty." << endl; // This line is unreachable
    return 0;
}