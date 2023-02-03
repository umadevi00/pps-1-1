#include <stdio.h>
void main()
{
    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if(marks>=70)
    printf("distiction");
    else if(marks>60&&marks<70)
    printf("first_class");
    else if(marks>=80&&marks<60)
    printf("second_class");
    else 
    printf("fail");
    printf("%d",marks);
}
