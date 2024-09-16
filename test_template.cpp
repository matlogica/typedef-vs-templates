#include <iostream>

#include <aadc/aadc.h>

template<class Real>
class Variant {
public:
//    Variant(int i) : i(i) {
//        std::cout << "Variant(int i) is called" << std::endl;
//    }
    Variant(Real r) : r(r) {
        std::cout << "Variant(Real r) is called" << std::endl;
    }
    Variant(const bool b) : b(b) {
        std::cout << "Variant(bool b) is called" << std::endl;
    }

    int i;
    Real r;
    bool b;
    const char* s;
};


int main() {
    Variant<double> v(1.5);                  // Variant(Real r) is called
    Variant<idouble> v_ad(1.5);              // Variant(bool b) is called :(
    Variant<idouble> v_ad2(idouble(1.5)); // Variant(Real b) is called
    return 0;
}