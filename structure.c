#include<stdio.h>
struct emp{
int ephno;
int eage;
char ename[20];
float esal;
};
int main()
{
int j,i;
struct emp e[20];
for(i=0;i<20;++i)
{
printf("\nEnter Employees detail \n");
printf("Emp Phonenumber.:-\t");
scanf("%d",&e[i].ephno);
printf("Emp Name :-\t");
scanf("%s",&e[i].ename);
printf("Emp age :-\t");
scanf("%d",&e[i].eage);
printf("Emp salary :-\t");
scanf("%f",&e[i].esal);
printf("\n \n");
}
printf("Name \t\t Age \t\t PhoneNo.\t\t Salary \n");
for(i=0;i<20;++i)
{
printf("%s \t\t %d \t\t  %d\t\t  %f\n",e[i].ename,e[i].eage,e[i].ephno,e[i].esal);
}
return 0;
}
