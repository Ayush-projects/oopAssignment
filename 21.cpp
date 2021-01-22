//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 21
#include <iostream>
#include <math.h>
#include <stdbool.h>

using namespace std;

class Vector
{
private:
    int size;
    double *arr;

public:
    Vector(double *arr, int size);
    Vector add(Vector);
    Vector subtract(Vector);
    double dot(Vector);      // dot product
    Vector multiply(Vector); // element wise multiplication
    bool greater(Vector);
    bool lesser(Vector);
    bool equal(Vector);
    void display();
};

Vector::Vector(double *arr, int size)
{
    this->arr = arr;
    this->size = size;
}

Vector Vector::add(Vector x)
{
    double *a = (double *)malloc(x.size * sizeof(double));
    for (int i = 0; i < size; i++)
    {
        a[i] = arr[i] + x.arr[i];
    }
    Vector res = Vector(a, size);
    return res;
}

Vector Vector::subtract(Vector x)
{
    double *a = (double *)malloc(x.size * sizeof(double));
    for (int i = 0; i < size; i++)
    {
        a[i] = arr[i] - x.arr[i];
    }
    Vector res = Vector(a, size);
    return res;
}

Vector Vector::multiply(Vector x)
{
    double *a = (double *)malloc(x.size * sizeof(double));
    for (int i = 0; i < size; i++)
    {
        a[i] = arr[i] * x.arr[i];
    }
    Vector res = Vector(a, size);
    return res;
}

double Vector::dot(Vector x)
{
    double res = 0.0;
    for (int i = 0; i < size; i++)
    {
        res += arr[i] * x.arr[i];
    }
    return res;
}

bool Vector::equal(Vector x)
{
    double modV1 = 0,modV2 = 0;
    for(int i = 0; i < x.size;i++){
        modV1 += pow(x.arr[i],2);
    }
    modV1 = sqrt(modV1);
    for(int i = 0; i < size; i++){
        modV2 += pow(arr[i],2);
    }
    modV2 = sqrt(modV2);
    return modV1 == modV2;
}

bool Vector::greater(Vector x)
{
    double modV1 = 0,modV2 = 0;
    for(int i = 0; i < x.size;i++){
        modV1 += pow(x.arr[i],2);
    }
    modV1 = sqrt(modV1);
    for(int i = 0; i < size; i++){
        modV2 += pow(arr[i],2);
    }
    modV2 = sqrt(modV2);
    return modV2 > modV1;
}

bool Vector::lesser(Vector x)
{
    double modV1 = 0,modV2 = 0;
    for(int i = 0; i < x.size;i++){
        modV1 += pow(x.arr[i],2);
    }
    modV1 = sqrt(modV1);
    for(int i = 0; i < size; i++){
        modV2 += pow(arr[i],2);
    }
    modV2 = sqrt(modV2);
    return modV2 < modV1;
}

void Vector::display()
{
    cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}

int main()
{
    double a[5] = {1, -0.45, 2.1, 0, 4.3};
    double b[5] = {4.3, -0.87, 2.2, 4, 1};
    Vector A = Vector(a, 5);
    Vector B = Vector(b, 5);
    Vector C = A.add(B);
    cout << "adding vector A and B results: ";
    C.display();
    C = A.subtract(B);
    cout << "subtracting vector B from A results: ";
    C.display();
    C = A.multiply(B);
    cout << "element wise multiplication of A and B results: ";
    C.display();
    cout << "dot product of A and B results: " << A.dot(B) << "\n";
    cout << "A and B equal ? " << A.equal(B) << "\n";
    cout << "A greater than B ? " << A.greater(B) << "\n";
    cout << "A less than B ? " << A.lesser(B) << "\n";
}