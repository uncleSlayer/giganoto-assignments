#include <string.h>
#include <stdio.h>
#include <ctype.h>
#define MAXCHAR 100


void lower_to_upper(char *low_str, char *new_str, int low_str_len){

    for(int i = 0; i<low_str_len; i++){
        if (isspace(low_str[i]))
        {
            new_str[i] = low_str[i];
        } else{
            new_str[i] = (low_str[i] - 32);
        }
    }

    return;
}

void upper_to_lower(char *upper_str, char*new_str, int upper_str_len){
    for (int i =0; i < upper_str_len; i++)
    {
        if (isspace(upper_str[i]))
        {
            new_str[i] = upper_str[i];
        } else{
            new_str[i] = (upper_str[i] + 32);
        }
    }
    
    return;
}

int main(){
    char low_str[] = "hello sir";
    char new_str[MAXCHAR];
    char upper_str[] = "HELLO SIR";

    // lower_to_upper(low_str, new_str, strlen(low_str));
    upper_to_lower(upper_str, new_str, strlen(upper_str));

    for (int i = 0; i<= strlen(low_str); i++)
    {
        printf("%c", new_str[i]);
    }
    
    return 0;
}