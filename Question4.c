#include <stdio.h>

int main(){

    int marks[4][2];

    printf("\nEnter marks: ");

    for(int i=0;i<=3;i++){
        for(int j=0;j<=1;j++){
            scanf("%d", &marks[i][j]);
        }
    }

    int highest_mid=marks[0][0], highest_final=marks[0][1], highest_overall=marks[0][0]+marks[0][1];
    int lowest_mid=marks[0][0], lowest_final=marks[0][1], lowest_overall=marks[0][0]+marks[0][1];
    int avg_mid = 0, avg_final = 0, sum_mid=0, sum_final=0;

    for(int i=0;i<=3;i++){
        for(int j=0;j<=0;j++){
            printf("total Marks: Student %d: %d", i+1, marks[i][j]+marks[i][j+1]);
            
            sum_mid = sum_mid + marks[i][j];
            sum_final = sum_final + marks[i][j+1];

            if(marks[i][j] > highest_mid){
                highest_mid = marks[i][j];
            }

            if(marks[i][j+1] > highest_final){
                highest_final = marks[i][j+1];
            }

            if(marks[i][0] + marks[i][1] > highest_overall){
               highest_overall = marks[i][0] + marks[i][1];
            }

            if(marks[i][j] < lowest_mid){
                lowest_mid = marks[i][j];
            }

            if(marks[i][j+1] < lowest_final){
                lowest_final = marks[i][j+1];
            }

            if(marks[i][0] + marks[i][1] < lowest_overall){
                lowest_overall = marks[i][0] + marks[i][1];
            }
        }
        printf("\n");
    }

    avg_mid = sum_mid/4;
    avg_final = sum_final/4;

    printf("\nhighest mid: %d", highest_mid);
    printf("\nhighest final: %d", highest_final);
    printf("\nhighest overall: %d", highest_overall);
    printf("\nlowest mid: %d", lowest_mid);
    printf("\nlowest final: %d", lowest_final);
    printf("\nlowest overall: %d", lowest_overall);
    printf("\naverage mid: %d", avg_mid);
    printf("\naverage final: %d", avg_final);

    return 0;
}