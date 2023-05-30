
//   Definition for singly-linked list.
#include<iostream>

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    // ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //    ListNode* result = nullptr;
    //    ListNode* traverse = nullptr;
    //    int remain = 0;
    //    int count = 0;
    //    while(l1!=nullptr || l2!=nullptr){
    //     int actual = 0;
    //     if(l1==nullptr){
    //         actual = l2->val + remain;
    //         l2 = l2->next;
    //     }
    //     else if(l2==nullptr){
    //         actual = l1->val + remain;
    //         l1 = l1->next;
    //     }
    //     else{
    //         actual = l1->val + l2->val + remain;
    //          l2 = l2->next;
    //          l1 = l1->next;
    //     }
    //     ListNode* tmp = new ListNode(actual%10);
    //     remain = actual/10;
    //     if(count==0){
    //         result = tmp;
    //         traverse = tmp;
    //     }
    //     else{
    //         traverse->next = tmp;
    //         traverse = traverse->next;
    //     }
    //     count++;
    //    }
    //    if(remain!=0){
    //     traverse->next = new ListNode(remain);
    //    }
    //    return result;
    // }

    // ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     if(head->next==nullptr){
    //         head=nullptr;
    //     }
    //     else{
    //         ListNode* after = head;
    //         ListNode* before = head;
    //         ListNode* end = head;
    //         int count = 0;
    //         if(n==1){
    //             while(end->next!=nullptr){
    //                 before = end;
    //                 end = end->next;
    //             }
    //             before->next = nullptr;
    //         }
    //         else{
    //             while(end!=nullptr){
    //                 end = end->next;
    //                 if(end==nullptr && count<n){
    //                     head = head->next;
    //                 }
    //                 if(end==nullptr && count >= n){
    //                     before->next = after;
    //                     break;
    //                 }
    //                 if(count>=n){
    //                     before = before->next;
    //                 }
    //                 if(count>=n-2){
    //                     after = after->next;
    //                 }
    //                 count++;
    //             }
    //         }
    //     }
    //     return head;
    // }

    // ListNode* swapPairs(ListNode* head) {
    //     if(head == nullptr || head->next == nullptr){
    //         return head;
    //     }
    //     else{
    //         ListNode* before = head;
    //         ListNode* after = head->next;
    //         ListNode* med = head;
    //         ListNode* tmp = head;
    //         int count = 0;
    //         while(after!=nullptr){
    //             before->next = after->next;
    //             after->next = before;
    //             if(count>0){
    //                 med->next = after;
    //             }
    //             if(count==0){
    //                 head = after;
    //             }
    //             count++;
    //             med=before;
    //             tmp=after;
    //             after=med;
    //             before=tmp;
    //             if(before->next->next!=nullptr && after->next!=nullptr && after->next->next!=nullptr){
    //                 before = before->next->next;
    //                 after = after->next->next;
    //             }
    //             else{
    //                 break;
    //             }
    //         }
    //         return head;
    //     }
    // }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        else{
            if(head->next->next==nullptr){
                if(k%2==0){
                    return head;
                }
                else{
                    return reverse(head);
                }
            }
            else{
                if(true){}
            }
        }
    }

    ListNode* reverse(ListNode* head){
        
    }
};

int main(){
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(3);
    // ListNode* d = new ListNode(4);
    // ListNode* e = new ListNode(5);
    // ListNode* f = new ListNode(6);
    a->next=b;
    b->next=c;
    // c->next=d;
    // d->next=e;
    // e->next=f;
    Solution s;
    // ListNode* res = s.addTwoNumbers(a,d);
    // ListNode* res = s.removeNthFromEnd(a,2);
    // ListNode* res = s.swapPairs(a);
    // std::cout << res->val << std::endl;
}