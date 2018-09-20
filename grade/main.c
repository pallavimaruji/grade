#include <stdio.h>
#include <stdlib.h>

int main()
{
    float per;
    char grade;
    printf("Enter per:");
    scanf("%f",&per);
    if(per>=90)
        grade='A';
    else if(per>=70)
        grade='B';
    else if(per>=50)
        grade='C';
    else
        grade='F';
    printf("Grade=%c",grade);
    getch();
    return 0;
}
