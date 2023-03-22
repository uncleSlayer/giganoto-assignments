#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char remove_white_space(char sample_arr[], int array_len){

    char * new_arr = (char *) calloc(array_len + 1, sizeof(char));
    int i, j;

    for (i = 0, j = 0; i <= array_len; i++)
    {
        if (!isspace(sample_arr[i]))
        {
            new_arr[j++] = sample_arr[i];
        };
        
    };

    new_arr[j] = '\0';

    printf("%s", new_arr);
    printf("\n");
    free(new_arr);
}

int main(){
    char sample[] = "hello boi.   getting bored hue hue";
    int char_array_len = strlen(sample);
    remove_white_space(sample, char_array_len);
    return 0;
}