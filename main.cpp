#include <stdio.h> //Biblioteca padrão de entrada e saída
#include <locale.h> //Biblioteca para moedas locais e idiomas

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("\e[0;32m\n¨¨-¨¨-¨¨-- Saida Texto Negrito e Colorido --¨¨-¨¨-¨¨\e[0;32m\n");

                    printf("\e[0;37m    Para deixar o título do este texto na cor verde,\n\e[0;37m");
                    printf("\e[0;37m    fiz o seguinte procedimento com as cores ");
                    printf("\e[4;33mANSI color codes.\n\e[4;33m");
                    printf("\e[0;37m Vamos ver quais são as cores em ANSI color code\n\e[0;37m");
                                    printf("\e[0;37m \n     VALUE  | COLOR\n");
                                    printf("\e[0;30m   \\e[0;30m | Black \n");
                                    printf("\e[0;31m   \\e[0;31m | Redz \n");
                                    printf("\e[0;32m   \\e[0;32m | Green \n");
                                    printf("\e[0;33m   \\e[0;33m | Yellow \n");
                                    printf("\e[0;34m   \\e[0;34m | Blue \n");
                                    printf("\e[0;35m   \\e[0;35m | Purple \n");
                                    printf("\e[0;36m   \\e[0;36m | Cyan \n");
                                    printf("\e[0;37m   \\e[0;37m | White \n");
                                printf("Como colorir o texto\n");
                                    printf("\e[031m '\e[034m \\e[0;34m Meu ");
                                        printf("\e[032m \\e[0;32m  texto ");
                                            printf("\e[035m \\e[0;35m Colorido \e[037m'");
    return(0);
}