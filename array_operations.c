
void printIntArray(int* p , int n){
    int i;
    for(i=0; i<n ; i++){
        printf("%d  " , *p);
        p++;
    }
}
void printString(char* p, int n){
    int i;
    for(i=0; i<n ; i++){
        printf("%c  " , *p);
        p++;
    }
}
void printFloatArray(float* p , int n){
    int i;
    for(i=0; i<n ; i++){
        printf("%f  " , *p);
        p++;
    }
}
