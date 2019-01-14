/******************************************************************************

            Máquina de chocolate

*******************************************************************************/

#include <stdio.h>

//Mostrar os chocolates disponiveis
void imprimirTabChoco(){
        printf("1 - Twix - 1.5\n");
        printf("2 - Mars - 0.9\n");
        printf("3 - KitKat - 1.0\n");
        printf("4 - Kinder bueno - 2.0\n");
}

//Determinar o preço do chocolate
//ler a opção    
float detchoco(){
    float preco;
        int op;
        imprimirTabChoco();
        scanf("%d",&op);
        switch(op){
        case 1:
            preco=1.5;
            break;
        case 2:
            preco=0.9;
            break;
        case 3:
            preco=1.0;
            break;
        case 4:
            preco=2.0;
            break;
        default :
            printf("Chocolate não disponível!");
            break;
        
         }
        return preco;
}
//Determinar a quantia
//Ler moedas
float moedeiro(){
    float quantia , moedas;
    do
    {
      scanf("%f",&moedas);
      fflush;
      quantia+=moedas;
    }while(moedas!=0);
  return quantia;
}

//Programa Principal
int main()
{
    //definição de Variaveis 
    float quantia,preco;
    //Determinar o preço do chocolate
    preco=detchoco();
    //Determinar quantia
    quantia=moedeiro();
    //Calcular troco
    //Subtrair o preço do chocolate à quantia
    printf("O troco é %f", quantia-preco);
 return 0;
}
