#include <stdio.h>
int main() {
    int x,y;
    x=1;
    int result1 = 5 + ++x;
    printf("%d ",result1);
    y=1;
    int result2 = 5 + y++;
    printf("%d",result2);
}
