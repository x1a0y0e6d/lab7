#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RUS");
    int digit;
    char* names[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };
    printf("������� ����� (0-9): ");
    scanf("%d", &digit);
    printf("%s\n", (digit >= 0 && digit <= 9) ? names[digit] : "������: ������� ����� 0-9");

    return 0;
}
