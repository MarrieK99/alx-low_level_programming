void printAlphabetUppercase() {
char letter;

for (letter = 'A'; letter <= 'Z'; letter++) {
/* Write the letter to standard output*/
write(1, &letter, 1);
}

/* Write a newline character*/
write(1, "\n", 1);
}

int main() {
printAlphabetUppercase();
return 0;
}
