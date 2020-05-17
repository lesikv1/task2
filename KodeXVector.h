#ifndef KODEXVECTOR_KODEXVECTOR_H
#define KODEXVECTOR_KODEXVECTOR_H

#include <string>
#include <sstream>

using namespace std;

template <typename T>
class KodeXVector {
private:
    T* data;
    int size{};
public:
    explicit KodeXVector(int size);
    KodeXVector(const KodeXVector& vector);
    KodeXVector(T array[], int length);

    int getSize();
    int setSize(int newSize);

    string toString();

    int add(T element);
    int remove(int index);

    KodeXVector& operator=(const KodeXVector& vector);
    bool operator==(KodeXVector& vector);
    T& operator[](int index);

    template <T> friend KodeXVector<T> operator+(KodeXVector<T>& a, KodeXVector<T>& b);
    template <T> friend int operator+(KodeXVector<T>& a, T b);
    template <T> friend int operator+(T a, KodeXVector<T>& b);

    template <T> friend KodeXVector<T> operator*(KodeXVector<T>& a, KodeXVector<T>& b);
    template <T> friend KodeXVector<T> operator*(KodeXVector<T>& a, T b);
    template <T> friend KodeXVector<T> operator*(T a, KodeXVector<T>& b);

//
    template <T> friend ostream& operator <<(ostream& output, KodeXVector<T>& vector);
    template <T> friend istream& operator >>(istream& input, KodeXVector<T>& vector);

    ~KodeXVector();
};



#endif //KODEXVECTOR_KODEXVECTOR_H
