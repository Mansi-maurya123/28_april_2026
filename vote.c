#include<stdio.h>
int main()
{
    int age;
    printf("enter age");
    scanf("%d",&age);
    switch(age){
        case 15:
    printf("as a kids");
break;
case 18:
printf("eligible for vote");
break;
case 60:
printf("eligible for vote (senior citizen)");
break;
default :
printf("default");   
}
return 0;
}