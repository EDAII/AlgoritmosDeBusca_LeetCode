// LeetCode 12 – Integer to Roman
// Assinatura esperada: char* intToRoman(int num)

#include <stdlib.h>
#include <string.h>

char* intToRoman(int num) {
    // Tabelas com casos subtrativos embutidos
    int vals[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* syms[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int n = sizeof(vals) / sizeof(vals[0]);

    // Tamanho máximo seguro para 1..3999 é pequeno; 20 sobra.
    char* out = (char*)malloc(20);
    int k = 0;

    for (int i = 0; i < n && num > 0; i++) {
        while (num >= vals[i]) {
            const char* s = syms[i];

            // copia símbolo (1 ou 2 letras)
            for (int j = 0; s[j] != '\0'; j++)
                out[k++] = s[j];

            num -= vals[i];
        }
    }
    out[k] = '\0';
    return out;
}
