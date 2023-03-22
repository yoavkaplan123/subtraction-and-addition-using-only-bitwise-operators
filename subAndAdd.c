#include <stdio.h>

int sub(unsigned int n1, unsigned int n2) {
    unsigned int dif, borrow;
    while (n2) {
        dif = n1 ^ n2;
        borrow = (n2 & dif) << 1;
        n1 = dif;
        n2 = borrow;
    }
    return dif;
}

int add(unsigned int n1, unsigned int n2) {
    unsigned int sum, carry;
    while (n2) {
        sum = n1 ^ n2;
        carry = (n2 & n1) << 1;
        n1 = sum;
        n2 = carry;
    }
    return sum;
}

void getNums(int * x, int * y) {
    printf("enter x: ");
    scanf("%d", x);
    
    printf("enter y: ");
    scanf("%d", y);
}

int main()
{
    int x, y;
    
    printf("x - y\n");
    
    getNums(&x, &y);
    
    printf("%d\n", sub(x, y));
    
    printf("x + y\n");
    
    getNums(&x, &y);
    
    printf("%d\n", add(x, y));

    return 0;
}
