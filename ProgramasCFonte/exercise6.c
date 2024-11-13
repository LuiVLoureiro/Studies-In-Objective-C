// Três amigos jogaram na loteria
// Caso eles ganhem, o prêmio deve ser repartido proporcionalmente
// ao valor que cada um deu para a realização da aposta.
// Faça um programa que leia quanto cada apostador
// apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio
// com base no valor investido.

# include <stdio.h>

int main(){

	float prize, num1, num2, num3;

	setbuf(stdout, NULL);

	printf("Type the value spend by the first friend -> ");
	scanf("%f", &num1);
	printf("Type the value spend by the second friend -> ");
	scanf("%f", &num2);
	printf("Type the value spend by the third friend -> ");
	scanf("%f", &num3);
	printf("Type the value of prize -> ");
	scanf("%f", &prize);

	float percentage1 = (num1/(num1+num2+num3))*prize;
	float percentage2 = (num2/(num1+num2+num3))*prize;
	float percentage3 = (num3/(num1+num2+num3))*prize;

	printf("The prize amount is %.2f \n", prize);
	printf("The first friend receives -> %.2f \n", percentage1);
	printf("The second friend receives -> %.2f \n", percentage2);
	printf("The third friend receives -> %.2f \n", percentage3);


	return 0;


}
