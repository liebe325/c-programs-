#include <stdio.h>
void main (){
    int days;
    printf("Enter number of Days to Calculate the Fine Amount for Late Submission : ");
    scanf("%d",&days);
    printf("Fine for Late Submission is Rs. 2 per Day \n");
    printf("------------------------------------- Total Fine -------------------------------\n");
    printf("Total Fine Amount is %d",days*2);

}
