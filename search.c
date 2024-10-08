#include <stdio.h>

void main(){
    int arr[5] = {1,2,3,1,5};
    int a;
    printf("Enter the element to search: ");
    scanf("%d", &a);

    for (int i=0;i<5;i++){
        if (a==arr[i]){
            printf("Index of your element: %d\n", i);
            break;
        }
    }
}
