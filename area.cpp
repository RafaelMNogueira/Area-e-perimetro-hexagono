#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Função para o Calculo
void calc_hexa(float L, float* area, float* perimetro) {
	*area = 3 * pow(L, 2) * sqrt(3) / 2;
	*perimetro = 6 * L;

}

int main()
{	//Definição de variáveis
	float L, perimetro, area;
	//Inicio da Aplicação Geral
	printf_s("Digite o lado: ");
	scanf_s("%f", &L);
	if (L <= -1) { // Verificação de Condição
		printf_s("Digite um valor positivo!\n");
		system("pause");
		exit(1);
	}else { // Execução em Caso de Negação da Verificação Anterior
		calc_hexa(L, &area, &perimetro);
		printf_s("A area eh de: %f\n", area);
		printf_s("O perimetro eh de: %f\n", perimetro);
	}

	system("pause"); // Pausa da Aplicação
	return 0;
}
