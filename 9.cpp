#include<iostream>
using namespace std;
void swap(string s1, string s2)
{
    string temp;
    temp = s1;
    s1 = s2;
    s2 = temp;
    cout<<"Strings after swapping : "<<s1<<" "<<s2;
}
int main()
{

string s1,s2;
cout<<"Enter two strings: ";
cin>>s1>>s2;
swap(s1,s2);




return 0;
}

//Using Reference

// #include<iostream>
// using namespace std;
// void swap(string &s1, string &s2)
// {
//     string temp;
//     temp = s1;
//     s1 = s2;
//     s2 = temp;
//     cout<<"Strings after swapping : "<<s1<<" "<<s2;
// }
// int main()
// {

// string s1,s2;
// cout<<"Enter two strings: ";
// cin>>s1>>s2;
// swap(s1,s2);




// return 0;
// }

