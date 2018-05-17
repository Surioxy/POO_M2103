#ifndef TYPESBASES_HPP
#define TYPESBASES_HPP

template <typename T>
class TypeBase {
    T myVal;
public :
    explicit TypeBase (const T & val = T ()) noexcept : myVal (val) {}
    operator T & () noexcept { return myVal; }
    operator const T & () const noexcept { return myVal; }
};

typedef TypeBase <int32_t>  Integer;
typedef TypeBase <int16_t>  Short;
typedef TypeBase <unsigned char>  Character;
#endif // TYPESBASES_HPP
