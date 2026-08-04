#include<stdio.h>
#include<conio.h>

int main() {
 int sub1,sub2,sub3,sub4,sub5;
 int per,total;
 printf("enter five subject marks ");
 scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
 total= sub1+sub2+sub3+sub4+sub5;
 per= total/5;
 printf("the percentage of the student=%d",per);


 
 return 0;
 }