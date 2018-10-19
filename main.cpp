#include <iostream>

 int poo () {
}
 int foo () {
    std::cout<< poo << '\n';
    std::cout<< poo << '\n';
    std::cout<< poo << '\n';
}
int main (){
    std::cout<< foo << '\n';
    return 0;
}
