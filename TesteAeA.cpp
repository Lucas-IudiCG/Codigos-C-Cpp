#include <stdio.h>

int main(){

    int a=2;
    int n= a++ + 1;
    int z= ++a + 1;
    printf("%d\n",n);
    printf("%d",z);
    return 0;
}
