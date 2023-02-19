int main() {
    for (int i = 0; i <= 8; i++) {  // i and j are single-digit numbers
        for (int j = i + 1; j <= 9; j++) {  // j must be greater than i
            int number = i * 10 + j;  // combine i and j into a two-digit number
            putchar(number / 10 + '0');  // print the first digit
            putchar(number % 10 + '0');  // print the second digit
            if (number < 89) {  // if this is not the last combination, print ", "
                putchar(', ');
            }
        }
    }
    return 0;
}

