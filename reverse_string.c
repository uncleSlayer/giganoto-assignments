#include <stdio.h>
#include <string.h>

void reverse(char * char_col_ptr, int array_len){
    for (int i = array_len; i >= 0; i--)
    {
        printf("%c", char_col_ptr[i]);
    }
    printf("\n");
    
    return;
}

int main(){
    char char_col[] = "hello";
    reverse(char_col, strlen(char_col));
    return 0;
}