
//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 12
#include <iostream>
#include <cstring>
using namespace std;

void Strcpy(const char *p1, char *p2)
{
    strcpy(p2, p1);
}

int main()
{
    char s1[50], s2[50];
    cout << "Enter the first  string " << endl;
    cin >> s1;
    cout << "Enter the second string " << endl;
    cin >> s2;
    cout << "String 1 before copying " << s1 << endl;
    cout << "String 2 before copying " << s2 << endl;
    Strcpy(s1, s2);
    cout << "String 1 after copying " << s1 << endl;
    cout << "String 2 after copying " << s2 << endl;

    return 0;
}