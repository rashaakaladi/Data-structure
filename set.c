#include<stdio.h>
#include <stdlib.h>
struct bit
{
int x;
};
int uset[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int size = 10;

void readset(struct bit a[], int n);
void printset(struct bit a[]);
void unionset(struct bit a[], struct bit b[], struct bit c[]);
void intersect(struct bit a[], struct bit b[], struct bit c[]);
void difference(struct bit a[], struct bit b[], struct bit c[]);

int main(void)
{
    struct bit a[10] = {0}, b[10] = {0}, c[10] = {0};
    int n;

    printf("Number of elements in set A: ");
    scanf("%d", &n);
    readset(a, n);

    printf("Number of elements in set B: ");
    scanf("%d", &n);
    readset(b, n);

    printf("\nSet A: ");
    printset(a);

    printf("Set B: ");
    printset(b);

    unionset(a, b, c);
    printf("A U B = ");
    printset(c);

    intersect(a, b, c);
    printf("A intersection B = ");
    printset(c);

    difference(a, b, c);
    printf("A - B = ");
    printset(c);

    return 0;
}
void readset(struct bit a[], int n)
{
int i, x, k;
printf("Enter %d elements: ", n);
for (i = 0; i < n; i++)
{
scanf("%d", &x);
for (k = 0; k < size; k++)
{
if (uset[k] == x)
{
a[k].x = 1;
break;
}
}
if (k == size)
{
printf("%d is not in the universal set.\n", x);
}
}
}
void printset(struct bit a[])
{
int k;
printf("{ ");
for (k = 0; k < size; k++)
{
if (a[k].x == 1)
{
printf("%d ", uset[k]);
}
}
printf("}\n");
}
void unionset(struct bit a[], struct bit b[], struct bit c[])
{
int k;
for (k = 0; k < size; k++)
{
c[k].x = a[k].x | b[k].x;
}
}
void intersect(struct bit a[], struct bit b[], struct bit c[])
{
int k;
for (k = 0; k < size; k++)
{
c[k].x = a[k].x & b[k].x;
}
}
void difference(struct bit a[], struct bit b[], struct bit c[])
{
int k;
for (k = 0; k < size; k++)
{
c[k].x = a[k].x & !b[k].x;
}
}

