#include<stdio.h>
int main(){
    int basic_pay;
    int allowence;
    int dedution ;
    int  grosssalary,netsalary;

    printf("enter the basic pay of employee");
    scanf("%d",&basic_pay);

    printf("enter the total amount allowence ");
    scanf("%d",&allowence);

    printf("enter the total deducation amount ");
    scanf("%d",&dedution);

    grosssalary=basic_pay+allowence;
    netsalary=grosssalary-dedution;

    printf(" Gross salary of the employee is %d\n",grosssalary);
    printf("net salary of thwe employee is %d\n" ,netsalary);


    return 0;

}