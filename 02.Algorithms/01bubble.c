#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, temp;
    int data[8]={15, 26 ,37, 27, 12, 8, 63, 45 };
    printf("Bubble Sort");
    for(i=0; i<8; i++)
        printf("%3d", data[i]);
    printf("\n");
    
    for(i=7;i>=0;i--){
        for(j=7;j<0;j--){
            if(data[j]>data[j+1]){
                tmp = data[j];
                data[j]=data[j+1];
                data[j+1]=tmp;
            }
        }
        printf("No. %d result: ", 8-i);
        for(j=0;j<8;j++)
            printf("%3d", data[j]);
        printf("\n");
    }
    printf("result: ");
    for(i=0;i<8;i++)
        printf("%3d", data[i]);
    printf("\n");
    
    system("pause");
    return 0;
}