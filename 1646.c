

int getMaximumGenerated(int n){
    int data[105];
data[0] = 0;
for (int i = 1; i <= n; i++) {
    if (i == 1)
        data[i] = 1;
    else {
        if (i % 2 == 0)
            data[i] = data[i / 2];
        else
            data[i] = data[i / 2] + data[i / 2 + 1];
    }
}
int max = data[0];
for (int i = 1; i <= n; i++) {
    if (data[i] > max)
        max = data[i];
}
return max;
}