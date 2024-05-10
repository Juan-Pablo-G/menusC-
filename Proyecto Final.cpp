#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
 
void menu(void);
void submenu(void);
void pedir_datos(void);
int op1, op2, op3, op4;
char op;
 
main()
{
	do{
		menu(); 	
		if (op == 1){
			submenu();
			pedir_datos();
			getch();
		}	
		if (op == 2){
			submenu();
			pedir_datos();
			getch();
		}
		if (op == 3){
			submenu();
			pedir_datos();
			getch();
		}
		if (op == 4){
			submenu();
			pedir_datos();
			getch();
		}	
	} while (op!=5);
}

void menu(void){
	system("cls");
	printf("Menu de opciones\n");
	printf("----------------\n");
	printf("1 - Operaciones matematicas\n");
	printf("2 - Estructuras selectivas y repetitivas\n");
	printf("3 - Ejercicios de impuestos\n");
	printf("4 - Acumuladores y contadores\n");
	printf("5 - Salir\n");
	printf("----------------\n");
	printf("Elija opcion: ");
	scanf("%d", &op);
	
	while (op != 1 && op != 2 && op != 3 && op != 4 && op != 5){
		printf("----------------\n");
		printf("Error, digite opcion valida: ");
		scanf("%c", &op);
		scanf("%d", &op);
		printf("\n");
	}
}

void submenu(){   
	
	if(op== 1){
		system("cls");
		printf("OPCION 1\n");
		printf("----------------\n");
		printf("1 - Determinar el cuadrado y el cubo de la suma y resta de un binomio\n");
		printf("2 - Solucion de la ecuacion cuadratica\n");
		printf("3 - Longitud y superficie de un circulo\n");
		printf("4 - Sumar, restar, multiplicar y dividir el inverso de tres numeros enteros\n");
		printf("5 - Volver al Menu\n");
		printf("----------------\n");
		printf("Elija opcion: ");
		scanf("%d",&op1);
	}
	if(op== 2){
		system("cls");
		printf("OPCION 2\n");
		printf("----------------\n");
		printf("1 - Mostrar los numeros primos entre dos numeros\n");
		printf("2 - Mostrar multiplos de un numero dado en un rango y suma de los numeros impares multiplos de ese numero en ese rango\n");
		printf("3 - Contar y mostrar los multiplos de un valor determinado para un rango ingresado por el usuario\n");
		printf("4 - Volver al Menu\n");
		printf("----------------\n");
		printf("Elija opcion: ");
		scanf("%d",&op2);
	}
	if(op== 3){
		system("cls");
		printf("OPCION 3\n");
		printf("----------------\n");
		printf("1 - Pago del impuesto de un carro\n");
		printf("2 - Pago de un trabajador\n");
		printf("3 - Volver al Menu\n");
		printf("----------------\n");
		printf("Elija opcion: ");
		scanf("%d",&op3);
	}
	if(op== 4){
		system("cls");
		printf("OPCION 4\n");
		printf("----------------\n");
		printf("1 - Contar e imprimir pares, impares y multiplos de un valor dado para los numeros entre 1 y 100\n");
		printf("2 - Contar e imprimir los multiplos de 5 y de 8 entre 500 y 600\n");
		printf("3 - Contar e imprimir los multiplos de 3 entre -200 y -100\n");
		printf("4 - Volver al Menu\n");
		printf("----------------\n");
		printf("Elija opcion: ");
		scanf("%d",&op4);
	}
}

void pedir_datos(){
	if(op1== 1){
		int bin1, bin2, sumaCubo, restaCubo, sumaCua, restaCua;;
		
		printf("\n----------------");
		printf("\nIngresa el primer valor: ");
		scanf("%d", &bin1);
		
		printf("Ingresa el segundo valor: ");
		scanf("%d", &bin2);
		
		sumaCua= bin1*bin1 + 2*bin1*bin2 + bin2*bin2;
		restaCua= bin1*bin1 - 2*bin1*bin2 + bin2*bin2;
		sumaCubo= bin1*bin1*bin1 + 3*bin1*bin1*bin2 + 3*bin1*bin2*bin2 + bin2*bin2*bin2;
		restaCubo= bin1*bin1*bin1 - 3*bin1*bin1*bin2 + 3*bin1*bin2*bin2 - bin2*bin2*bin2;

		printf("\n\nCalculo de la suma del cuadrado: %d", sumaCua);
		printf("\nCalculo de la resta del cuadrado: %d", restaCua);
		printf("\n\nCalculo de la suma del cubo: %d", sumaCubo);
		printf("\nCalculo de la resta del cubo: %d", restaCubo);
	}	
	if(op1== 2){
		float a, b, c, dis, raiz, raiz1, raiz2;
		
		printf("\n----------------");
		printf("\nIngrese el coeficiente a: ");
		scanf("%f", &a);
		printf("Ingrese el coeficiente b: ");
		scanf("%f", &b);
		printf("Ingrese el coeficiente a: ");
		scanf("%f", &c);
		
		dis= b*b - 4*a*c;
		
		if(dis > 0){
			raiz1= (-b + sqrt(dis)) / (2 * a);
			raiz2= (-b - sqrt(dis)) / (2 * a);
			printf("\n\nLas raices son: %.2f y %.2f", raiz1, raiz2);
		}
		else if(dis== 0){
			raiz= -b / (2 * a);
			printf("\n\nLa ecuacion tiene una raiz doble: %.2f", raiz);
		}
		else{
			printf("\n\nLa ecuacion no tiene soluciones reales");
		}
	}	
	if(op1== 3){
		float radio, lon, sup;
		int Pii= 3.1416;
		
		printf("\n----------------");
		printf("\nIngrese el radio del circulo: ");
		scanf("%f", &radio);
		
		lon= 2 * Pii * radio;
		sup= Pii * pow(radio, 2);
		
		printf("\n\nLa longitud del circulo es: %.2f", lon);
		printf("\nLa superficie del circulo es: %.2f", sup);
	}	
	if(op1== 4){
		int num1, num2, num3, num1R, num2R, num3R, suma, resta, mult;
			
        printf("\n----------------");
		printf("\nIngrese el primer numero: ");
		scanf("%d", &num1);
		while(num1 > 9999999){
			printf("El numero no puede ser mayor de 7 digitos: \n");
			scanf("%d", &num1);
		}

		printf("Ingrese el segundo numero: ");
		scanf("%d", &num2);
		while(num2 > 9999999){
			printf("El numero no puede ser mayor de 7 digitos: \n");
			scanf("%d", &num2);
		}
		
		printf("Ingrese el tercer numero: ");
		scanf("%d", &num3);
		while(num3 > 9999999){
			printf("El numero no puede ser mayor de 7 digitos: \n");
			scanf("%d", &num3);
		}

		num1R= 0;
		num2R= 0;
		num3R= 0;
		
		while(num1 != 0){
			num1R= num1R * 10 + num1% 10;
			num1= num1 / 10;
		}
		while(num2 != 0){
			num2R= num2R * 10 + num2% 10;
			num2= num2 / 10;
		}
		while(num3 != 0){
			num3R= num3R * 10 + num3% 10;
			num3= num3 / 10;
		}
		
		suma= num1R + num2R + num3R;
		resta= num1R - num2R - num3R;
		mult= num1R * num2R * num3R;
		
		printf("\n\nSuma utilizando los numeros al reves: %d", suma);
		printf("\nResta utilizando los numeros al reves: %d", resta);
		printf("\nMultiplicacion utilizando los numeros al reves: %d", mult);
	}	
	if(op1== 5){
		return menu();
	}
	
	if(op2== 1){	
		int num1, num2;
		
			printf("\nIngrese el primer numero: ");
    		scanf("%d", &num1);
    		
    		printf("Ingrese el segundo numero: ");
    		scanf("%d", &num2);
    		
    		printf("\nLos numeros primos entre %d y %d son: ", num1, num2);
    		
    		for(int i= num1; i <= num2; i++){
    			if(i % num1 == 0){
    				printf("\n\t\t%d", i);
				}
			}
	}
	if(op2== 2){
		int num, rangoIni, rangoFin;
		int sumaImpar= 0;
		
		printf("\nIngrese el numero: ");
		scanf("%d", &num);
		
		printf("Ingrese el rango inicial: ");
		scanf("%d", &rangoIni);
		
		printf("Ingrese el rango final: ");
		scanf("%d", &rangoFin);
		
		printf("\nLos multiplos de %d en el rango %d a %d son: ", num, rangoIni, rangoFin);
		
		for(int i= rangoIni; i <= rangoFin; i++){
			if(i %num == 0){
				printf("%d  ", i);
				
				if(i %2 != 0){
					sumaImpar += i;
				}
			}
		}
		
		printf("\n\nLa suma de los numeros impares multiplos de %d en ese rango es: %d", num, sumaImpar);
	}
	if(op2== 3){
		int num, rangoIni, rangoFin;
		int count= 0;
		
		printf("\nIngrese el numero: ");
		scanf("%d", &num);
		
		printf("Ingrese el rango inicial: ");
		scanf("%d", &rangoIni);
		
		printf("Ingrese el rango final: ");
		scanf("%d", &rangoFin);
		
		printf("\nLos multiplos de %d en el rango %d a %d son: ", num, rangoIni, rangoFin);
		
		for(int i= rangoIni; i <= rangoFin; i++){
			if(i %num == 0){
				printf("%d  ", i);
				count++;
			}
		}
		
		printf("\n\nEl total de multiplos de %d en ese rango es: %d", num, count);
	}
	if(op2== 4){
		return menu();
	}

	if(op3== 1){
    	float valorC, impuestos, descuentoProntoP, descuentoTrabajadorO, impuestosPagar;
    	int prontoP, trabajadorO;

    	printf("\nIngrese el valor del carro: ");
    	scanf("%f", &valorC);

	    printf("Realizara pronto pago? (1: Si, 0: No): ");
	    scanf("%d", &prontoP);
	
	    printf("Es trabajador oficial? (1: Si, 0: No): ");
	    scanf("%d", &trabajadorO);
	
	    impuestos= valorC * 0.15;
	    descuentoProntoP= 0.0;
	    descuentoTrabajadorO = 0.0;
	
	    if (prontoP == 1){
	        descuentoProntoP = impuestos * 0.1;
	    }
	
	    if (trabajadorO == 1){
	        descuentoTrabajadorO = impuestos * 0.05;
	    }
	
	    impuestosPagar= impuestos - descuentoProntoP - descuentoTrabajadorO;

	    printf("\nValor total de los impuestos: %.1f", impuestos);
	    printf("\nDescuento por pronto pago: %.1f", descuentoProntoP);
	    printf("\nDescuento para trabajador oficial: %.1f", descuentoTrabajadorO);
	    printf("\nValor a pagar despues de descuentos: %.1f", impuestosPagar);

	}
	if(op3== 2){
    	float horasTrabajadasPorDia, valorHora, horasTrabajadasPorSemana, salarioBase, descuento, salarioNeto;
    	float horasExtras, valorHoraExtra, salarioExtra;

	    printf("\nIngrese el numero de horas trabajadas por dia: ");
	    scanf("%f", &horasTrabajadasPorDia);
	
	    printf("Ingrese el valor de la hora: ");
	    scanf("%f", &valorHora);
	
	    horasTrabajadasPorSemana= horasTrabajadasPorDia * 6;
	    salarioBase= horasTrabajadasPorSemana * valorHora;
	
	    if (horasTrabajadasPorSemana > 40) {
	        horasExtras= horasTrabajadasPorSemana - 40;
	        valorHoraExtra= valorHora * 1.5;
	        salarioExtra= horasExtras * valorHoraExtra;
	        salarioBase += salarioExtra;
	    }
	
	    descuento= salarioBase * 0.12;
	    salarioNeto= salarioBase - descuento;
	
	    printf("\nEl salario neto mensual del trabajador es: %.1f", salarioNeto);
    }
	if(op3== 3){
		return menu();
	}
	
	if(op4== 1){
		int num, i;
		int mult= 0;
		int numPar= 0;
		int numImp= 0;
		
		while(num < 1 || num > 100){
			printf("\nDigite un numero un entre 1 y 100: ");
			scanf("%d", &num);
		}
		
		for(i= 1; i <= 100; i++){
			if(i %num== 0){
				mult++;
			}else if (i % 2 == 0){
				numPar++;
        	}else{
            	numImp++;
			}
        }
		
		printf("\n\nTotal de multiplos de %d: %d", num, mult);
		printf("\nTotal de numeros pares: %d", numPar);
		printf("\nTotal de numeros impares: %d", numImp);
	}
	if(op4== 2){
		int i;
		int mult5= 0;
		int mult8= 0;
		
		for(i= 500; i <= 600; i++){
			if(i %5== 0){
				printf("%d  ", i);
				mult5++;
			}
			if(i %8== 0){
				printf("%d  ", i);
				mult8++;
			}
		}
		
		printf("\n\nTotal de multiplos de 5 entre 500 y 600: %d", mult5);
		printf("\nTotal de multiplos de 8 entre 500 y 600: %d", mult8);
	}
	if(op4== 3){
		int i;
		int mult3= 0;
		
		for(i= -200; i <= -100; i++){
			if(i %3== 0){
				printf("%d  ", i);
				mult3++;
			}
		}
		
		printf("\n\nTotal de multiplos de 3 entre -200 y -100: %d", mult3);
	}
	if(op4== 4){
		return menu();
	}
}