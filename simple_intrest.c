#include<stdio.h>
int main(){
    float principle,time;
    float result,intrest;
    

    printf("enter the principle amounte");
    scanf("%f",&principle);
    printf("enter value of the interest");
    scanf("%f",&intrest);
    printf("enter time(in year )");
    scanf("%f",&time);
    
    result=(principle*intrest*time)/100;
    printf("%f",result);

    return 0;
 

}
