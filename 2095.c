/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteMiddle(struct ListNode* head){
    if(head->next == NULL)
        return NULL;
    struct ListNode* temp1 = head;
    int count = 0;
    while(temp1 != NULL){
        count = count + 1;
        temp1 = temp1->next;
    }
    
    printf("%d\n",count);
    struct ListNode* temp = head;
    struct ListNode* slow = head;
    struct ListNode* fast = head->next;
    
    while(fast){
        fast = fast->next;
        if(fast){
            slow = slow->next;
            fast = fast->next;
        }
    }
    
    printf("hello\n");
    struct ListNode* mid;
    if(count%2 == 0)
        mid = slow->next;
    else
        mid = slow;
    printf("%d\n",mid->val);
    temp = head;
    struct ListNode* prev;
    while(temp != mid){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    temp->next = NULL;
    
    return head;
}