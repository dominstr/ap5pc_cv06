template <class T>
Point<T>::Point(T x) : _x(x)
{
}

template <class T>
T Point<T>::getX() const
{
    return _x;
}

template <class T>
Point<T> Point<T>::operator+(const Vector<T>& vector) const {
    return Point(_x + vector.getX());
}

template <class T>
Vector<T> Point<T>::operator-(const Point& other) const {
    return Vector<T>(_x - other._x);
}

template <class U>
std::ostream& operator<<(std::ostream& os, const Point<U>& point) {
    os << "Point(" << point._x << ")";
    return os;
}