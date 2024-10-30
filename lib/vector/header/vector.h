#include <iostream>

template <class T>
class Vector
{
private:
    T _x;

public:
    Vector(T x);

    T getX() const;

    template <class U>
    friend std::ostream& operator<<(std::ostream& os, const Vector<U>& vector);
};

#include "../template/vector.tpp"
