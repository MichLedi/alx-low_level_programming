int main() {
    for (int i = 0; i <= 7; i++) {  // i, j, and k are single-digit numbers
        for (int j = i + 1; j <= 8; j++) {
            for (int k = j + 1; k <= 9; k++) {
                int number = i * 100 + j * 10 + k;  // combine i, j, and k into a three-digit number
                if (number % 111 == 0) {  // if the three digits are the same, skip this combination
                    continue;
                }
                putchar(i + '0');  // print the first digit
                putchar(j + '0');  // print the second digit
                putchar(k + '0');  // print the third digit
                if (number < 789) {  
                    putchar(', ');
                }
            }
        }
    }
    return 0;
}

