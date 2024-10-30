template <class T>
Vector<T>::Vector(T x) : _x(x)
{
}

template <class T>
T Vector<T>::getX() const
{
    return _x;
}

template <class U>
std::ostream& operator<<(std::ostream& os, const Vector<U>& vector) {
    os << "Vector(" << vector._x << ")";
    return os;
}