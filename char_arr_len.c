#include <stdio.h>

void find_len(char * char_ptr){
    int i;
    for (i = 0; (char_ptr[i] != '\0'); i++)
    {
        ;
    }
    printf("the length of the given array is: %d \n", i);
    return;
}

int main(){
    char arr[] = "hello";
    find_len(arr);
    return 0;
}