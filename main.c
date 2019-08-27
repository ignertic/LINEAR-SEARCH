/* LINEAR SEARCH */
#include <stdio.h>
#include <stdlib.h>


int main(){
    int arr[20];
    int i, size, sech;
    printf("enter no. of elements! \n");
    scanf("%d", &size);
    /* GETS INPUT OF VALUES */
    for(i=0;i<size;i++){
        printf("Enter the %d element \n", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Value to be found! \n");
    scanf("%d", &sech);
    // Search for an element
    for (i=0;i<size;i++){
        if (sech==arr[i]){
            printf("found at: %d is %d \n",i+1,sech);
        }else{
            printf("%d not found! \n", sech);
        }
    }
}