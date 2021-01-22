//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 14
#include <chrono> 
#include <iostream> 
#include<vector> 
using namespace std; 
using namespace std::chrono; 
//Inline function takes less time but more memory than normal function
int sum1(long long int a,long long int b,long long int c){
    return a+b+c;
}

inline int sum2(long long int a,long long int b,long long int c){
    return a+b+c;
}
   
int main() 
{ 
    long long int res;
    auto start1 = high_resolution_clock::now(); 
    res = sum2(1234567,1234567,1234567);
    auto stop1 = high_resolution_clock::now(); 
    auto duration1 = duration_cast<nanoseconds>(stop1 - start1);
    cout<<"sum = "<<res<<endl; 
    cout << "Time taken by inline function: "<< duration1.count() << " nanoseconds" << endl;

    auto start2 = high_resolution_clock::now(); 
    res = sum1(1234567,1234567,1234567);
    auto stop2 = high_resolution_clock::now(); 
    auto duration2 = duration_cast<nanoseconds>(stop2 - start2);
    cout<<"sum = "<<res<<endl; 
    cout << "Time taken by non inline function: "<< duration2.count() << " nanoseconds" << endl; 
  
    return 0; 
}