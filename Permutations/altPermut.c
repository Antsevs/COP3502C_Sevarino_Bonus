<<<<<<< HEAD
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void ExchangeCharacters(char str[], int i, int j) {
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
}
void RecursivePermute(char str[], int head, int tail) {
    if (head == tail) {
        printf("%s\n", str);
        return;
    }
    for (int i = head; i <= tail; i++) {
        ExchangeCharacters(str, head, i);
        RecursivePermute(str, head + 1, tail);
        ExchangeCharacters(str, head, i);
    }
}

void Permute(char str[]) {
    int length = strlen(str);
    RecursivePermute(str, 0, length - 1);
}

int main(){
    printf("hello world\n");
    char str[] = "ACT";
    Permute(str);
    return 0;
}

=======
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void ExchangeCharacters(char str[], int i, int j) {
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
}
void RecursivePermute(char str[], int head, int tail) {
    if (head == tail) {
        printf("%s\n", str);
        return;
    }
    for (int i = head; i <= tail; i++) {
        ExchangeCharacters(str, head, i);
        RecursivePermute(str, head + 1, tail);
        ExchangeCharacters(str, head, i);
    }
}

void Permute(char str[]) {
    int length = strlen(str);
    RecursivePermute(str, 0, length - 1);
}

int main(){
    printf("hello world\n");
    char str[] = "ACT";
    Permute(str);
    return 0;
}

>>>>>>> 78cb8d934a07fc9bef8bd2c4af7133c9c2459275
