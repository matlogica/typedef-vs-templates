clang++ -o test_native test_typedef.cpp
g++ -o test_active -I../ReleasePackages/AADC-Demo/aadc/include/ -D AADC test_typedef.cpp ../ReleasePackages/AADC-Demo/aadc/lib/libaadc-avx2.a


g++ -o test_template -I../ReleasePackages/AADC-Demo/aadc/include/ test_template.cpp ../ReleasePackages/AADC-Demo/aadc/lib/libaadc-avx2.a
