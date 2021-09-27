#include <iostream>
using namespace std;

int main()
{
    int bob = 6;

    int *bob2 = &bob;

    cout << bob << *bob2 << endl;

    ++*bob2;

    cout << *bob2 << endl;

    int &bob3 = bob;

    ++bob;
    cout << bob << endl;

    ++bob3;
    cout << bob3 << endl;

    // constexpr int compile_time_only {1000};
}