#include <stdio.h>
#include <stdlib.h>
int main()
{
    int temp , i;
 int a[6] = {1,2,3,4,5,6};
 for (i=0; i<=5;i++)
 {
    temp=a[i];
    a[i] = a[5-i];
     a[5-i]=temp;

 }
    for (i=0 ; i<=5 ; i++)

{
    printf( "%d", a[5-i]);
}

}