

int mostWordsFound(char ** sentences, int sentencesSize){
    int count_max = 0;
    int count_temp;
    int j;
    for(int i=0;i<sentencesSize;i++){
        char* sentence = sentences[i];
        count_temp = 0;
        j = 0;
        while(sentence[j] != '\0'){
            if(sentence[j] == ' '){
                printf("hello1\n");
                count_temp++;
            }
            j++;
        }
        if(count_temp >= count_max){
            count_max = count_temp;
        }
    }
    return count_max+1;
}