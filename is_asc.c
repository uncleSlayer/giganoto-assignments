#include <stdio.h>

int check_asc(int arr[], int arr_len){
    for(int j = 0; j < (arr_len - 1); j++){
        if (arr[j] < arr[j + 1])
        {
            ;
        } else{
            return j;
        };
    };

    return 0;
}

int main(){
    int int_arr[] = {23, 45, 64, 12, 67};
    int array_len = (sizeof(int_arr)/sizeof(int));
    int status = check_asc(int_arr, array_len);
    printf("If the status comes out to be 0, the array is sorted in asc order. If the status comes out to be a non zero value the index next to the status breaks the asc condition. \n");
    printf("the status for the asc check is : %d \n", status);
    return 0;
}