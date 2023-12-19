#include <stdio.h>
#include <string.h>

void inversor() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    int length = strlen(str);
	int i;
	
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("String Invertida: %s\n", str);
}

int main(){
    inversor();
}