#include <stdio.h>
#define MAXLEN 10

void sort_arr(float *arr_ptr, int arr_len)
{
    for (int i = 1; i < arr_len; i++)
    {
        for (int j = 0; j < (arr_len - 1); j++)
        {
            if (arr_ptr[j] > arr_ptr[j + 1])
            {
                float temp = arr_ptr[j];
                arr_ptr[j] = arr_ptr[j + 1];
                arr_ptr[j + 1] = temp;
            }
        }
    }
    return;
}

void find_median(float *arr_ptr, int arr_len)
{
    sort_arr(arr_ptr, MAXLEN);
    if ((arr_len % 2) == 0)
    {
        printf("the median is: %f", ((arr_ptr[0] + arr_ptr[MAXLEN])/2));
    } else{
        printf("the median is: %f", (arr_ptr[MAXLEN/2] + 1));
    }

    return;
}

int main()
{
    float arr[MAXLEN] = {10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0};
    find_median(arr, MAXLEN);
    return 0;
}