#include <stdio.h>
#include <stdlib.h>

#define Pi 3.14159265358979323846

int main(){

    int opcao;

    int opcao_circulo;

    float base = 0;

    float base_maior = 0;

    float base_menor = 0;

    float lado = 0;

    float raio = 0;

    float diametro = 0;

    float altura = 0;

    float formula_quadrado;

    float formula_triangulo;

    float formula_triangulo_equilatero;

    float formula_retangulo;

    float formula_trapezio;

    float formula_paralelogramo;

    float formula_losango;

    float formula_circulo_circunferencia;

    float formula_circulo_area_total;

   
    printf("Digite a opcao de area que deseja calcular: \n");
    printf("1 - Area do quadrado \n");
    printf("2 - Area do triangulo \n");
    printf("3 - Area do triangulo equilatero \n");
    printf("4 - Area do trapezio \n");
    printf("5 - Area do retangulo \n");
    printf("6 - Area do paralelogramo \n");
    printf("7 - Area do losangulo \n");
    printf("8 - Area do circulo \n");
    scanf("%i", &opcao);

    //iniciando os blocos do switch

    switch(opcao){

        case 1:

            printf("Voce escolheu a opcao: 'Area do quadrado' \n");

            do{

                printf("Digite o valor do lado: \n");
                scanf("%f", &lado);

            }while(lado <=0);

            formula_quadrado = lado * lado;

            printf("O valor da area de seu quadrado e: %.2f \n", formula_quadrado);

        break;

        case 2:

            printf("Voce escolheu a opcao: 'Area do triangulo' \n");

            do {

                printf("Digite o valor da base: \n");
                scanf("%f", &base);

            }while(base <= 0);

            do{

                printf("Digite o valor da altura: \n");
                scanf("%f", &altura);

            }while(altura <=0);

            formula_triangulo = (base * altura)/ 2;

            printf("O valor da area de seu triangulo e: %.2f \n", formula_triangulo);

        break;

        case 3:

            printf("Voce escolheu a opcao 'Area do triangulo equilatero' \n");

            do{

                printf("Digite o valor do lado: \n");
                scanf("%f", &lado);

            }while(lado <=0);

            formula_triangulo_equilatero = ((lado * lado) * 1.73) / 4;

            printf("O valor da area de seu triangulo equilatero e: %.2f \n", formula_triangulo_equilatero);

        break;

        case 4:

            printf("Voce escolheu a opcao 'Area do trapezio' \n");

            do{

                printf("Digite o valor da base maior: \n");
                scanf("%f", &base_maior);

            }while(base_maior <=0);

            do{

                printf("Digite o valor da base menor: \n");
                scanf("%f", &base_menor);

            }while(base_menor <=0);

            do{

                printf("Digite o valor da altura: \n");
                scanf("%f", &altura);

            }while(altura <=0);

            if(base_maior > base_menor){

                formula_trapezio = ((base_maior + base_menor) * altura) / 2;

                printf("O valor da area de seu trapezio e: %.2f \n", formula_trapezio);

            } else if(base_maior == base_menor){

                formula_trapezio = ((base_maior + base_menor) * altura) / 2;
                
                printf("Os valores das bases sao equivalentes \n");
                printf("O valor da area de seu trapezio com bases equivalentes e: %.2f \n", formula_trapezio);

            } else {

                printf("Por favor, digite o valor da base maior corretamente! \n");

            }

        break;

        case 5:

            printf("Voce escolheu a opcao: 'Area do retangulo' \n");

            do{

                printf("Digite o valor da base: \n");
                scanf("%f", &base);

            }while(base <=0);

            do{

                printf("Digite o valor da altura: \n");
                scanf("%f", &altura);

            }while(altura <=0);

            formula_retangulo = base * altura;

            printf("O valor da area de seu retangulo e: %.2f \n", formula_retangulo);

        break;

        case 6:

            printf("Voce escolheu a opcao 'Area do paralelogramo' \n");

            do{

                printf("Digite o valor da base: \n");
                scanf("%f", &base);

            }while(base <=0);

            do{

                printf("Digite o valor da altura: \n");
                scanf("%f", &altura);

            }while(altura <=0);

            formula_paralelogramo = base * altura;

            printf("O valor da area de seu paralelogramo e: %.2f \n", formula_paralelogramo);

        break;

        case 7:

            printf("Voce escolheu a opcao 'Area do losango' \n");

            do{

                printf("Digite o valor da base menor: \n");
                scanf("%f", &base_menor);

            }while(base_menor <=0);

            do{

                printf("Digite o valor da base maior: \n");
                scanf("%f", &base_maior);

            }while(base_maior <=0);

            if(base_maior > base_menor){

                formula_losango = (base_maior * base_menor)/2;

                printf("O valor da area de seu losango e: %.2f \n", formula_losango);

            } else if(base_maior == base_menor){

                formula_losango = (base_maior * base_menor)/2;

                printf("O valor das duas bases sao equivalentes \n");
                printf("O valor da area de seu losango com bases equivalentes e: %2.f \n", formula_losango);

            } else {

                printf("Por favor, digite o valor da base maior corretamente! \n");

            }

        break;

        case 8:

            printf("Voce escolheu a opcao 'Area do circulo' \n");

            printf("Digite qual area do circulo deseja calcular: \n");
            printf("1 - Area total do circulo \n");
            printf("2 - Circunferencia \n");
            printf("Digite sua opcao: \n");
            scanf("%i", &opcao_circulo);

            switch(opcao_circulo){

                case 1:

                    printf("Voce escolheu a opcao 'Area total do circulo' \n");

                    do{

                        printf("Digite o valor do diametro: \n");
                        scanf("%f", &diametro);

                    }while(diametro <=0);

                    formula_circulo_area_total = (Pi * (diametro * diametro)) /4;

                    printf("O valor da area total de seu circulo e: %.2f \n", formula_circulo_area_total);

                break;

                case 2:

                    printf("Voce escolheu a opcao 'Circunferencia' \n");

                    do{

                        printf("Digite o valor do raio: \n");
                        scanf("%f", &raio);

                    }while(raio <=0);

                    formula_circulo_circunferencia = Pi * (raio * raio);

                    printf("O valor da area de sua circunferencia e: %.2f \n", formula_circulo_circunferencia);

                break;

                default:

                    printf("Por favor, digite uma das duas opcoes listadas no menu acima. Obrigada! \n");

                break;

            }


        break;

        default:

            printf("Por favor, digite um dos valores referente as opcoes. Obrigada! \n");

        break;

    }

    return 0;

}