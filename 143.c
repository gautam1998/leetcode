/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* findMid(struct ListNode* head,int count){
    struct ListNode* fast = head->next;
    struct ListNode* slow = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    
    if(count%2 == 0)
        return slow;
    else
        return slow->next;
}
void reorderList(struct ListNode* head){
    if(head == NULL || head->next == NULL)
        return head;
    
    struct ListNode* temp = head;
    int count = 0;
    while(temp != NULL){
        count = count + 1;
        temp = temp->next;
    }
    
    struct ListNode* mid = findMid(head,count);
    //printf("%d\n",count);
    printf("%d\n",mid->val);
    temp = head;
    struct ListNode* start;
    struct ListNode* end;
    struct ListNode* counter;
    struct ListNode* prev;
    while(temp != mid){
        start = temp;
        counter = temp;
        printf("%d\n",temp->val);
        while(counter->next != NULL){
            prev = counter;
            counter = counter->next;
        }
        counter->next = temp->next;
        temp->next = counter;
        prev->next = NULL;
        if(count%2 != 0 && temp->next == mid){
            break;
        }
        temp = temp->next->next;
        
    }
    return ;
}