#include "cpp_helpers/helpers.hpp"
#include "cpp_helpers/listNode.hpp"

ListNode* mergeTwoLists(const ListNode *l1, const ListNode *l2) {
    if (!l1 && !l2) return nullptr;
    ListNode *const head = new ListNode;

    for (ListNode * cur = head; ; ) {

        // s is the reference to the nonnullptr pointers l1 or l2 
        // with the smallest value
        auto& s = ( l1 && l2  
            ? (l1->val < l2->val ? l1 : l2)
            : (l1 ? l1 : l2)
        );

        cur->val = s->val; 
        s = s->next;
        
        if (!l1 && !l2) break;
        cur = cur->next = new ListNode;
    }

    return head;
}

int main() {
    auto l1 = ListNode::make_list({}), 
         l2 = ListNode::make_list({});
    ListNode* res = mergeTwoLists(l1, l2); 
    cout << (res ? res->to_str() : "empty_list") << "\n";

    return 0;
}