/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* sorted(struct ListNode* head){
    if(head == NULL){
        return NULL;
    }
    else if(head->next == NULL){
        struct TreeNode* temp = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        temp->val = head->val;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    else if(head->next->next == NULL){
        struct TreeNode* temp = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        temp->val = head->next->val;
        temp->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        temp->left->val = head->val;
        temp->left->left = NULL;
        temp->left->right = NULL;
        temp->right = NULL;
        return temp;
    }
    
    struct ListNode* fast = head->next;
    struct ListNode* slow = head;
    struct ListNode* prev;
    while(fast){
        fast = fast->next;
        if(fast){
            prev = slow;
            fast = fast->next;
            slow = slow->next;
        }
    }
    
    //printf("%d\n",slow->val);
    
    struct ListNode* p1 = head;
    prev->next = NULL;
    //printf("%d",p1->val);
    //printf("%d",p1->next->val);
    struct ListNode* p2 = slow->next;
    struct TreeNode* temp = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    temp->val = slow->val;
    temp->left = sorted(p1);
    temp->right = sorted(p2);
    return temp;
}

struct TreeNode* sortedListToBST(struct ListNode* head){
    
    return sorted(head);
}

