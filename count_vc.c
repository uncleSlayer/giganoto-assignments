#include <stdio.h>
#include <string.h>
#include <ctype.h>

void count(char *sample_ptr, int array_len)
{
    int v_count = 0;
    int c_count = 0;

    for (int i = 0; i <= array_len; i++)
    {
        if (isalpha(sample_ptr[i]))
        {
            if ((sample_ptr[i] == 'a' || sample_ptr[i] == 'A') || (sample_ptr[i] == 'e' || sample_ptr[i] == 'E') || (sample_ptr[i] == 'i' || sample_ptr[i] == 'I') || (sample_ptr[i] == 'o' || sample_ptr[i] == 'O') || (sample_ptr[i] == 'u' || sample_ptr[i] == 'U'))
            {
                v_count++;
            }
            else if (sample_ptr[i] == ' ' || sample_ptr[i] == '\n' || sample_ptr[i] == '\0')
            {
                ;
            }
            else
            {
                c_count++;
            }
        }
    }
    printf("number of vowels is: %d and consonents is: %d", v_count, c_count);
    printf("\n");

    return;
}

int main()
{
    char sample_str[] = "i am Siddhant.";
    count(sample_str, strlen(sample_str));
    return 0;
}