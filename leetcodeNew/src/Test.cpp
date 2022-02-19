#include <iostream>
#include <vector>
#include <string>

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

int main(){
    int* ptr = nullptr;
    int val = 21;
    // ptr = &val;
    std::cout << ptr << std::endl;
    std::cout << &val << std::endl;
    return 0;
}