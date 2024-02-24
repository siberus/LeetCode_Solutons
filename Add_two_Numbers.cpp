class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* answer_first = nullptr;
        ListNode* answer_curr = answer_first;
        int a = 0;
        int b = 0;
        int c = 0; 
        int d = 0;

        while((l1 != nullptr) or (l2 != nullptr)){
            if(l1 != nullptr){
                a = l1 -> val;
            }
            if(l2 != nullptr){
                b = l2 -> val;
            }
            c = a + b + d;
            if(c > 9){
                d = 1;
            }
            else{
                d = 0;
            }
            ListNode* AnswerNode = new ListNode(c % 10);
            answer_first == nullptr ? answer_first = AnswerNode : answer_curr -> next = AnswerNode;
            answer_curr = AnswerNode;
            if(l1 != nullptr) l1 = l1 -> next;
            if(l2 != nullptr) l2 = l2 -> next;
            a = b = c = 0; 
             
        }
        if(d > 0) {
            ListNode* AnswerNode = new ListNode(d);
            answer_curr -> next = AnswerNode;
        }

    return answer_first;
    }
};