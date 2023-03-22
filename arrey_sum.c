#include <stdio.h>

int array_adder(int *a, int *b, int len_a, int len_b, int *new_arr, int *new_arr_len){
    for (int i = 0; i < len_a; i++)
    {
        new_arr[*new_arr_len] = (a[i] + b[i]);
        (*new_arr_len)++;
    }
    
    return 0;
}

int main(){
    int sample[] = {10, 20, 30};
    int sample_two[] = {40, 50, 60};
    int new_arr[3] = {};

    int new_arr_len = 0;
    int *new_arr_len_ptr = &new_arr_len;
    int sample_len = (sizeof(sample) / sizeof(int));
    int sample_two_len = (sizeof(sample_two) / sizeof(int));

    array_adder(sample, sample_two, sample_len, sample_two_len, new_arr, new_arr_len_ptr);


    for (int i = 0; i <= new_arr_len-1; i++)
    {
        printf("%d\n", new_arr[i]);
    };
    

    return 0;
}