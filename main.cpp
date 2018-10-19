#include <iostream>
#include <tgmath.h>

float poo (float m, float t, float x, float RES){
    RES = (1/(t*sqrt(2*3.140)))*exp(-pow((x-m),2)/2*(pow(t,2)));
    return RES;
}
int main() {
    float m=1, t=2, x=3, RES;
    std::cout << poo <<std::endl;
    return 0;

}
