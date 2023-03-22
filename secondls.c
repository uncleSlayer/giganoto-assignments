#include <stdio.h>

void sort_it(int *int_arr, int array_len){
    for(int i = 1; i < array_len; i++){
        for(int j = 0; j < (array_len - i); j++){
            if (int_arr[j] > int_arr[j +1])
            {
                int temp = int_arr[j];
                int_arr[j] = int_arr[j+1];
                int_arr[j+1] = temp;
            }
        };
    }
    return;
}

int main(){
    int int_col[] = {45, 5, 34, 67, 90, 23, 53, 12, 11, 34, 76};
    int array_len = (sizeof(int_col)/ sizeof(int));
    sort_it(int_col, array_len);
    printf("the second first element is: %d and the second last element is: %d", int_col[1], int_col[array_len - 2]);
    return 0;
}