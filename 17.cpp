//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 17
#include <iostream>
using namespace std;
int add(int a, int b = 0, int c = 0)
{
    return a + b + c;
}

int main()
{
    cout << add(1, 2, 3) << "\n";
    cout << add(1, 2) << "\n";
    cout << add(1) << "\n";
    return 0;
}