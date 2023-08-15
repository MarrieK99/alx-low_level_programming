/**
 * print_times_table - Print times table up to 10 for a given value
 * @n: The value specifying the times table
 */
void print_times_table(int n) {
if (n > 15 || n < 0)
return;
for (int i = 1; i <= 10; i++) {
for (int j = 1; j <= n; j++) {
printf("%d * %d = %d\n", j, i, j * i);
}
}
}
