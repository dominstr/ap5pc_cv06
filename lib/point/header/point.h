#include "vector.h"

template <class T>
class Point
{
private:
    T _x;

public:
    Point(T x);

    T getX() const;

    Point operator+(const Vector<T>& vector) const;

    Vector<T> operator-(const Point& other) const;

    template <class U>
    friend std::ostream& operator<<(std::ostream& os, const Point<U>& point);
};

#include "../template/point.tpp"
