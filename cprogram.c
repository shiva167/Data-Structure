#include<stdio.h>
#include<conio.h>
int main(){
    int m,n,o,p;
    float t, a;
    printf("Enter marks = ");
    scanf("%d", &m);
    printf("Enter marks = ");
    scanf("%d", &n);
    printf("Enter marks = ");
    scanf("%d", &o);

    t = m + n  + o;
    a = t / 3;
    if(a>90){
        printf("A");
    }else if(a>80){
        printf("B");
    }else{
        printf("C");
    }
    return 0;
}