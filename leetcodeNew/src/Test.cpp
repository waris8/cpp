#include <iostream>
#include <vector>
#include <string>

int main(){
    int* ptr = nullptr;
    int val = 21;
    // ptr = &val;
    std::cout << ptr << std::endl;
    std::cout << &val << std::endl;
    return 0;
}