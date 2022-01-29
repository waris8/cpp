#include <iostream>

struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode* n) : val(x), next(n){}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* outputHead;
    ListNode* outputPtr;
    ListNode* temp1 = list1;
    ListNode* temp2 = list2;
    int count = 0;
    while(temp1 != nullptr && temp2 != nullptr){
        ListNode temp;
        if(temp1->val > temp2->val){
            temp.val = temp2->val;                
            temp2 = temp2->next;
        }
        else{
            temp.val = temp1->val;
            temp1 = temp1->next;
        }
        if(count == 0){
            outputHead = &temp;
            outputPtr = outputHead;
            }
        else{
            outputPtr->next = &temp;
            outputPtr = outputPtr->next;
        }
        ++count;
    }
    ListNode* remaining;
    if(temp1 == nullptr){
        remaining = temp2;
    }
    else{
        remaining = temp1;
    }
    while(remaining != nullptr){
        outputPtr->next = remaining;
        outputPtr = outputPtr->next;
        remaining = remaining->next;
    }
    return outputHead;
}

int main(){
    std::cout << "linked lists are so fun" << std::endl;
    ListNode n1(1);
    ListNode n2(2);
    ListNode n3(3);
    ListNode n4(4);
    ListNode n5(5);
    ListNode* l1 = &n1;
    l1->next = &n2;
    l1->next->next = &n4;
    ListNode* l2 = &n1;
    l2->next = &n3;
    l2->next->next = &n5;
    ListNode* result = mergeTwoLists(l1,l2);
    while(true){
        if(result == nullptr){break;}
        std::cout << result->val << std::endl;
        result = result->next;
    }
    return 0;
}