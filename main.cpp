#include <iostream>
#include <tgmath.h>

int main() {
    float a = 1, b;
    b=a-int(a);
        std::cout<< ((b==0)? "нет" :"есть") << std::endl;
        return 0;
    }