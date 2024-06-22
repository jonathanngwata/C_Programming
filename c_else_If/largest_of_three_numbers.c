
#include <stdio.h>

int main() {

    int a;
    int b;
    int c;
    printf("Enter fst number\n");
    scanf("%d",&a);
    
    printf("Enter secnd num\n");
    scanf("%d",&b);
    
    printf("Enter thrd num\n");
    scanf("%d",&c);
    
    if(a > b)
    {
        if(b > c){
        printf("%d is big",a);
        }
    }
    else if(c > b){
        if(b > a)
        printf("%d is big",c);
    }
    else
    printf("%d is big",b);
    return 0;
}
