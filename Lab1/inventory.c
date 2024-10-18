#include <stdio.h>

int main(void) {
    int A3Stock, A4Stock, A5Stock;
    int A3Order, A4Order, A5Order;

    A3Stock = 1000;
    A4Stock = 1000;
    A5Stock = 1000;
    
    printf("Place Order on A3:\n");
    scanf("%d", &A3Order);
    A3Stock = A3Stock - A3Order;

    printf("Place Order on A4:\n");
    scanf("%d", &A4Order);
    A4Stock = A4Stock - A4Order;

    printf("Place Order on A5:\n");
    scanf("%d", &A5Order);
    A5Stock = A5Stock - A5Order;

    printf("Order\nA3:%d\nA4:%d\nA5:%d\n", A3Order, A4Order, A5Order);
    printf("Remaining Stock\nA3:%d\nA4:%d\nA5:%d\n", A3Stock, A4Stock, A5Stock);
    
    return 0;
}
