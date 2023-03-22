#include <stdio.h>

void bubble_sort(int * int_array, int array_len){
    for(int i = 1; i < array_len; i++){
        for (int j = 0; j < (array_len - i); j++)
        {
            if(int_array[j] > int_array[j+1]){
                int temp = int_array[j];
                int_array[j] = int_array[j + 1];
                int_array[j + 1] = temp;
            };
        };
        
    };
    return;
}

int main(){
    int int_arr[] = {5, 27, 7, 3, 1, 25, 39};
    int array_len = (sizeof(int_arr)/sizeof(int));
    bubble_sort(int_arr, array_len);
    printf("first element is: %d and the last element is: %d \n" , int_arr[0], int_arr[array_len - 1]);
    return 0;
}