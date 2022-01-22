/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

struct ListNode2 {
    int val;
    int count;
    struct ListNode2 *next;
};

void find(struct ListNode** head_p, int val){
    struct ListNode* head = *head_p;
    
    struct ListNode2* temp;
    
    if(head == NULL){
        printf("hello\n");
        temp = (struct ListNode2*)malloc(sizeof(struct ListNode2));
        temp->val = val;
        temp->count = 1;
        temp->next = NULL;
        *head_p = temp;
        return;
    }
    
    int flag = 0;
    struct ListNode2* head2 = head;
    struct ListNode2* prev;
    while(head2 != NULL){
        if(head2->val == val){
            head2->count++;
            *head_p = head;
            return;
        }
        prev = head2;
        head2 = head2->next;
    }
    
    printf("prev %d\n",prev->val);
    
    temp = (struct ListNode2*)malloc(sizeof(struct ListNode2));
    temp->val = val;
    temp->count = 1;
    temp->next = NULL;
    prev->next = temp;
    *head_p = head;
    return;
    
}

void PreOrderTraversal(struct TreeNode* root , struct ListNode2** head_p){
    
    struct ListNode2* head = *head_p;
    
    if(root == NULL)
        return;
    
    printf("%d\n",root->val);
    if(head == NULL)
        printf("Null Linked\n");
    if(head != NULL)
        printf("linked list %d\n",head->val);
    
    find(&head,root->val);
    
    PreOrderTraversal(root->left,&head);
    PreOrderTraversal(root->right,&head);
    
    *head_p = head;
    
}

int* findMode(struct TreeNode* root, int* returnSize){
    struct ListNode2* head = NULL;
    PreOrderTraversal(root,&head);
    
    int max = 1;
    struct ListNode2* head2 = head; 
    while(head != NULL){
        printf("hello\n");
        printf("%d -> %d\n",head->val,head->count);
        if(head->count > max){
            max = head->count;
        }
        head = head->next;
    }
    
    printf("max %d\n",max);
    
    int* arr;
    
    arr = (int*)malloc(sizeof(int)*100);
    
    int count = 0;
    while(head2 != NULL){
        if(head2->count == max){
            arr[count] = head2->val;
            printf("array -> %d\n",arr[count]);
            count++;
        }
        head2 = head2->next;
    }
    
    printf("count %d\n",count);
    *returnSize = count;
    
    
    return arr;
}