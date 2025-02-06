#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char str1[100],str2[100];
    scanf("%s %d %s\n",&a,&str1,&str2);
    printf("Name: %s\n",str1);
    printf("Age: %d\n",a);
    printf("Hobby: %s\n",str2);
    return 0;
}