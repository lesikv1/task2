#include <iostream>
#include "KodeXVector.cpp"

using namespace std;


int main() {
    cout << "Init empty vector" << endl;
    int p[] = {50, 40, 30, 20, 10};
    KodeXVector<int> vec(p,5);
    cout << "Data: " << endl;
    cout << vec.toString() << endl;
    cout << "Modified by index: " << endl;
//    vec[10] = 228;
    cout << vec.toString();

    cout << endl;
    int p2[] = {1, 2, 3, 4, 5};
    KodeXVector<int> vec2(p2, 5);
    cout << vec2;

    KodeXVector<int> sum = vec + vec2;
    cout << endl << "Sum: " << sum;

    KodeXVector<int> multiply = vec * vec2;
    cout << endl << "Multiply: " << multiply;

    return 0;
}