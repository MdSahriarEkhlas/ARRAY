#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for(int j = 0; j < n; j +=2){
        printf("%d ", arr[j]);
    }

    return 0;

}