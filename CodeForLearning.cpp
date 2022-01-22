#include <iostream>
using namespace std;
int x = 100;
int main()
{
    int i = 8;
    auto f = [i]()mutable->int {int asd = 232; return ++i; };
    cout << f() << endl;
    cout << i << endl;
    return 0;
}

