#ifndef NUMEROS_COMPLEXOS_H_INCLUDED
#define NUMEROS_COMPLEXOS_H_INCLUDED

/**
*   Função que calcula a potência de "i",
*   onde, (i = √ -1).
*
*   @param int | O valor da potência de "i".
*   @return int | Retorna 1 em caso de sucesso ou
*   0 em caso de falha.
*   @author Pedro Serer.
*/

int potencia_de_i(int potencia) {
    int valores[4] = {49, 105, 49, 105};

    potencia %= 4;

    for (int i = 0; i < 4; i++) {
        if (potencia == i) {
            if (potencia == 2 || potencia == 3) {
                printf("i^%d = -%c\n", potencia, valores[i]);
            } else {
                printf("i^%d = %c\n", potencia, valores[i]);
            }
            return 1;
        }
    }
    return 0;
}

#endif
