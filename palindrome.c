#include <stdio.h>
#include <string.h>

int palindrome_checker(char palin_str[], int palin_length){

    for (int i = 0; i <= ((palin_length/2)+1); i++)
    {
        if (palin_str[i] == palin_str[(palin_length-1) - i])
        {
            ;
        } else {
            return -1;
        }
        
    }

    return 0;
    
}

int main(){
    char palin_char_arr[] = "eye";
    int palin_char_arr_len = strlen(palin_char_arr);
    if (palindrome_checker(palin_char_arr, palin_char_arr_len) == 0)
    {
        printf("this is a palindrome \n");
    } else{
        printf("this is not a palindrome \n");
    }
    
    return 0;
}