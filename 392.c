

bool isSubsequence(char * s, char * t){
    int len = strlen(t);
    for(int i = 0; i < len; i++) {
        if(*s == t[i]) {
            s++;
        }
    }
    return *s == '\0';
}