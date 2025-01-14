/*#include <stdio.h>
int main(void){
    int i = 0;
    int j = 0;
    for(i =0; i<5; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
    int floor;
    int i = 0;
    int j = 0;
    int k = 0;
    printf("몇층으로 쌓을래?:");
    scanf("%d", &floor);
    for(i = 0; i<=floor; i++)
    {
        for(j=i; j<=floor; j++)
        {
            printf(" ");
        }
        for(k = 0; k < i * 2 -1; k++)
        {
            printf("*");      
        }
        printf("\n");
    }
    return 0;
}