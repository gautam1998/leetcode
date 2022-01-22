/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int power(int base,int exp){
    if(exp == 0)
        return 1;
    int sum = base;
    for(int i = 1;i<exp;i++){
        sum = sum*base;
    }
    return sum;
}

int getDecimalValue(struct ListNode* head){
    int sum = 0;
    int count = 0;
    int count_nodes = 0;
    struct ListNode* temp = head;
    while(temp != NULL){
        count_nodes++;
        temp = temp->next;
    }
    printf("%d",count_nodes);
    
    count_nodes = count_nodes - 1;
    while(head != NULL){
        sum = sum + (head->val*power(2,count_nodes));
        head = head->next;
        count_nodes = count_nodes-1;
    }
    return sum;
}