

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

bool divTwo(int num){
    while(num%2 == 0){
        //printf("%d ",num);
        num = num/2;
    }
    
    if(num == 1)
        return true;
    else
        return false;
}
int* countBits(int n, int* returnSize){
    *returnSize = n+1;
    int* arr;
    arr = (int*)malloc(sizeof(int)*(n+1));
    if(n == 0){
        arr[0] = 0;
        return arr;
    }
    if(n == 1){
        arr[0] = 0;
        arr[1] = 1;
        return arr;
    }
     
    arr[0] = 0;
    arr[1] = 1;
    printf("%d : %d\n",0,arr[0]);
    printf("%d : %d\n",1,arr[1]);
    int max,temp;
    for(int i=2;i<=n;i++){
        //printf("%d ->",i);
        if(i%2 == 0){
            if(divTwo(i)){
                arr[i] = 1;
                printf("%d : %d\n",i,arr[i]);
                max = i;
            }
            else{
                //printf("hello ");
                temp = i-max;
                arr[i] = arr[max] + arr[temp];
                printf("%d : %d\n",i,arr[i]);
            }
        }
        else{
            //printf("hello");
            arr[i] = arr[i-1] + 1;
            printf("%d : %d\n",i,arr[i]);
        }
        
    }
    
    return arr;
}