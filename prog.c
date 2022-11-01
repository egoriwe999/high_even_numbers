#include <string.h>
#include <stdio.h>

int resh(int n);

int main() {
    int a,n;
    scanf("%d",&n);
    a = resh(n);
    int *p = &a;
    printf("%d",*p);
    return 0;
}
int resh(int n){
    int d,x,c=1;
    int m = 0, v = 0;
    while (n>0) {
        if (n%2 == 0) { // четные числа M
                m*=10;
                x = n%10;
                m+=x;
                n /= 10;
                }
        else if(n%2 == 1) { // нечетные числа V
                v*=10;
                x = n%10;
                v+=x;
                n /= 10;
                }
        }
        while(c<=v){
        c*=10;
        }
        d = (c*m)+v;
        return d;
}

// created by egoriwe999
