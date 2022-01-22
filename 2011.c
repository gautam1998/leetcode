

int finalValueAfterOperations(char ** operations, int operationsSize){
    char inc1[] = "++X";
    char inc2[] = "X++";
    char dec1[] = "--X";
    char dec2[] = "X--";
    int x = 0;
    //return strcmp(inc1,inc2);
    for(int i=0;i<operationsSize;i++){
        if(strcmp(operations[i],inc1) == 0 || strcmp(operations[i],inc2) == 0){
            x++;
        }
        else{
            x--;
        }
    }
    return x;
}