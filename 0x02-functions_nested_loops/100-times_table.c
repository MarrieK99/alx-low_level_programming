#include <unistd.h> // for the write function

void print_char(char c) {
    write(1, &c, 1);
}

void print_number(int number) {
    // ... (same as before)
}

void print_times_table(int n) {
    // ... (same as before)
}

int main() {
    int n = 12; // Change this to the desired value
    print_times_table(n);
    return 0;
}
