#include <stdio.h>

int sum_multiples_of_3_or_5(int limit) {
int sum = 0;
for (int i = 1; i < limit; i++) {
if (i % 3 == 0 || i % 5 == 0) {
sum += i;
}
}
return sum;
}

int main()
{
int sum_of_multiples = sum_multiples_of_3_or_5(1024);
printf("%d\n", sum_of_multiples);
return (0);
}
