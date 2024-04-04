#include <stdio.h> //Biblioteca que é permitida a utilização

int main() { // Declarando variáveis para número binário, número decimal e potência de dois
    int bin; 
    int dec = 0; // Esse valor necessita que seja atribuído 0, para que o valor decimal resultante seja armazenado nela
    int pot = 1; //Essa variável armazena a potência ede 2 correspondente à posição atual do dígito binário sendo processado
    int num; // Essa variável é criada para armazenar o número dado como entrada, para que possa ser impresso no final do programa
    
    // Pede ao usuário que entre com o número que deseja fazer a conversão
    printf("Digite um valor em Binario para conversao em Decimal: ");
    scanf("%d", &bin); //Linha de entrada do número a ser convertido
    
    num = bin; //O número originalmente digitado fica armazenado na memória para poder ser impresso, e "compartilha" seu valor com outra variavel
    
    while (bin != 0) { // Aqui é iniciado um loop para que, enquanto o valor do número binário for diferente de 0, continuará executando o programa
            int digito = bin % 10; // Após calcular o resto da divisão, essa linha dará o último digito do número binário, 0 ou 1
            dec += digito * pot; // Essa linha converte um dígito binário para decimal e adiciona o valor ao número decimal acumulado a cada iteração
            pot *= 2; // Atualiza a potência de 2 para a próxima posição binária
            bin /= 10; // Remove o último dígito do número binário
    }
    printf("O numero: %d em Decimal e: %d\n", num, dec); // Imprime o resultado final do programa, conforme solicitado
    
    return 0; //Esse comando indica que o programa foi executado com sucesso e está sendo encerrado
}