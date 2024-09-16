#include <iostream>

#ifdef AADC
#include <aadc/aadc.h>
typedef idouble Real;
#else
typedef double Real;
#endif

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
    Variant v(1.5); // In AAD mode Variant(bool b) is called,
    // in non-AAD mode Variant(Real r) is called

    Variant v_fixed(Real(1.5)); // Variant(Real r) is called
    
    return 0;
}