#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <locale.h> //Biblioteca para moedas locais e idiomas

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("\e[0;32m\n¨¨-¨¨-¨¨-- Saida Texto Negrito e Colorido --¨¨-¨¨-¨¨\e[0;32m\n");
                    printf("\e[0;37m AGORA TEXTO EM COLORIDO EM NEGRITO\n\e[0;37m");
                                    printf("\e[0;37m \n     VALUE  | COLOR\n");
                                    printf("\e[1;30m   \\e[1;30m | Black \n");
                                    printf("\e[1;31m   \\e[1;31m | Redz \n");
                                    printf("\e[1;32m   \\e[1;32m | Green \n");
                                    printf("\e[1;33m   \\e[1;33m | Yellow \n");
                                    printf("\e[1;34m   \\e[1;34m | Blue \n");
                                    printf("\e[1;35m   \\e[1;35m | Purple \n");
                                    printf("\e[1;36m   \\e[1;36m | Cyan \n");
                                    printf("\e[1;37m   \\e[1;37m | White \n");
                                printf("\e[0;37m Como colorir o texto\n\e[0;37m");
                                    printf("\e[1;31m '\e[1;34m \\e[1;34m Meu ");
                                        printf("\e[1;32m \\e[1;32m  texto ");
                                            printf("\e[1;35m \\e[1;35m Colorido \e[0;31m'\e[0;37m");
    return(0);
}