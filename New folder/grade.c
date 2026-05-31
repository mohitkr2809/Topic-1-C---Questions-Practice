#include <stdio.h>
int main() {
int marks;
printf("Enter marks: ");
scanf("%d", &marks);
if (marks > 80) printf("EXCELLENT\n"); else
if (marks > 60) printf("GOOD\n"); else if
(marks > 40) printf("AVERAGE\n"); else
printf("FAIL\n");
return 0;
}