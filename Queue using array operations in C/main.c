#include <stdio.h>
#include <stdlib.h>
#include "PILE.h"

int main() {
    myQueue Q1;
    int val;
    Q1.head = Q1.tail = 0;
    printf("Enter the maximum size of the queue: ");
    scanf("%d", &Q1.size);

    while (!isFull(Q1)) {
        printf("Enter a value: ");
        scanf("%d", &val);
        enqueue(&Q1, val);
    }

    while (!isEmpty(Q1)) {
        printf("%d -- ", dequeue(&Q1));
    }

    return 0;
}
