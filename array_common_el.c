#include <stdio.h>

void find_common_el(int *arr_one, int *arr_two, int arr_one_len, int arr_two_len){
    printf("the common elements are: \n");
    for (int i = 0; i < arr_one_len; i++)
    {
        for(int j = 0; j<arr_two_len; j++){
            if (arr_one[i] == arr_two[j])
            {
                printf("%d \n", arr_two[j]);
            }
        }
    }
    return;
}

int main(){
    int arr_one[] = {55, 12, 88, 10};
    int arr_two[] = {55, 45, 10};
    int arr_one_len = (sizeof(arr_one) / sizeof(int));
    int arr_two_len = (sizeof(arr_two) / sizeof(int));

    find_common_el(arr_one, arr_two, arr_one_len, arr_two_len);
    return 0;
}