#include <stdio.h>

int find_factorial(int a){
    if (a == 0 || a == 1)
    {
        return 1;
    }
    
    return (a * (find_factorial(a - 1)));
}

int main(){
    int a = 5;
    printf("%d", find_factorial(a));
    return 0;
}