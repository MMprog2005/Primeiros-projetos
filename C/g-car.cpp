#include <stdio.h>
#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include <Windows.h>
#include <ctype.h>
using namespace std;

void gotoxy(int x, int y){
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1
	});
}

int main()
{
	//minhas v�riaveis numericas;
	int opcao, pronta_entrega = 0, sair;	
	float precoCarro = 0, precoOleo = 0, precoRevisao = 0, precoPneu = 0;
	
	//minhas structs:
	
	//struct de informa��es cadastrais
	struct cadastro{
		char nome[50] = "0";
		int cpf[20]; 
		char email[50];
		int tel[10];
	};
	struct cadastro cad;
	
	//struct de servi�os
	struct servicos{
		int oleo = 0;
		int pneu = 0;
		int revisao = 0;
	};
	struct servicos ser;
	
	//structs de modelos dos ve�culos:
	//modelo 1
	struct modelo1{
		char marca[10] = "MCLAREN";
		char modelo[10] = "ARTURA";
		int valor = 2800000;
	}; struct modelo1 m1;
	
	//modelo 2
	struct modelo2{
		char marca[10] = "BMW";
		char modelo[10] = "Z4";
		int valor = 460000;
	}; struct modelo2 m2;
	
	//modelo 3
	struct modelo3{
		char marca[10] = "PORSHE";
		char modelo[15] = "718 CAYMAN";
		int valor = 522000;
	}; struct modelo3 m3;
	
	//modelo 4
	struct modelo4{
		char marca[10] ="FERRARI";
		char modelo[10] = "ROMA";
		int valor = 2900000;
	}; struct modelo4 m4;
	
	//inicio do programa
	do{
		//limpeza da tela do sistema para reinicio
		system("cls");
		//permiss�o de acentua��o
		setlocale(LC_ALL, "Portuguese");
		//mudan�a de cor do sistema
	  	system("color f8");
	  	
	  	//borda
	  	setlocale(LC_CTYPE, "C");
	  	for(int j = 0; j<129; j++){
	    	printf("\033[34m\xdf");
		}
		printf("\n");
		for(int j = 0; j<35; j++){
	    	printf("\xdb\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\xdb\n");
		}
		for(int j = 0; j<129; j++){
	    	printf("\xdf");
		}
		
		gotoxy(30, 5);
		//permiss�o de acentua��o
		setlocale(LC_CTYPE, "portuguese");
		
	  	//ascci art do desenho inicial
	  	printf("\033[30m\t                ' _'.'\"\"\"\"\"\"\\\"\"\"\"\"\"\"- .`-._\n");
		printf("\t               ______.-'                   (_) |      \\           ` \\`-. _\n");
		printf("\t               /_       --------------'-------\\---....______\\__`.`  -..___\n");
		printf("\t               | T      _.----._           Xxx|x...           |          _.._`--. _\n");
		printf("\t               | |    .' ..--.. `.         XXX|XXXXXXXXXxx==  |       .'.---..`.     -._\n");
		printf("\t               \\_j   /  /  __  \\  \\        XXX|XXXXXXXXXXX==  |      / /  __  \\ \\    `-.\n");
		printf("\t                 _|  |  |  /  \\  |  |       XXX|\"\"'            |     / |  /  \\  | |      |\n");
		printf("\t             |__\\_j  |  \\__/  |  L__________|_______________|_____j |  \\__/  | L__________J\n");
		printf("\t                   `'\\ \\      / ./__________________________________\\ \\      / /___________\\\n");
		printf("\t                       `.`----'.'                                     `.`----'.`\n");
		printf("\t                        `\"\"\"\"'                                         `\"\"\"\"'\n");
	    
	    //menu
	    printf("\t��������������������������������������CONCESSION�RIA G-CAR�����������������������������������������\n\n\n");
		printf("\t\t\t\t\t\t 1 - Cadastro\n");
	    printf("\t\t\t\t\t 2 - Autom�veis Pronta-entrega\n");
	    printf("\t\t\t\t\t\t 3 - Servi�os\n");
	    printf("\t\t\t\t\t\t 4 - Sobre N�s\n");
	    printf("\t\t\t\t\t\t 5 - Relat�rio\n");
	    printf("\t\t\t\t\t Pressione 0 para sair do programa\n\n");
	
	
		printf("\n\t\t\t\t\t\tEscolha uma op��o: ");
	    //leitura da op��o
	    scanf("%i", &opcao);
	    
	    //estrutura condicional para a op��o escolhida
	  	switch (opcao) {
	  		//cadastro
	        case 1:
	        	//repeti��o para sair da p�gina quando a vari�vel "sair" == 0
	        	do{
	        		
	        		//fun��o para mudar a cor da tela
		        	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 16);
		        	system("cls");
		        	
		            printf("\n\n\t\t\t\t\tVoc� escolheu a op��o (Cadastro).\n\n");
		            
		            //borda
		           	setlocale(LC_CTYPE, "C");
	  				for(int j = 0; j<120; j++){
	    				printf("\xdf");
					}
					//permiss�o de acentua��o
					setlocale(LC_CTYPE, "portuguese");
					
		            printf("\n\n\t\t\t  Caso n�o queira se cadastrar, pressione 0 para voltar ao menu.\n\n\n");
		           	printf("\033[37m Digite seu nome>>> ");
		           	fflush(stdin);
		           	//scanf para leitura de Strings com espa�os
		           	scanf("%50[^\n]s", &cad.nome);
		           	fflush(stdin);
		           	
		           	//gambiarra para se o usuario digitar "0" o prgrama retorna ao menu
		           	if(cad.nome[0] == '0'){
		           		break;
					}
					
	
		           	printf(" Digite seu email>>> ");
		           	scanf("%50[^\n]s", &cad.email);
		           	fflush(stdin);
		           	printf(" Digite seu CPF>>> ");
		           	scanf("%20[^\n]i", &cad.cpf);
		           	fflush(stdin);
		           	printf("\033[37m Digite seu Telefone>>> ");
		           	scanf("%10[^\n]i", &cad.tel);
		           	fflush(stdin);
	           	
	           		printf("\n\n\t\t\t\t\033[32m Parab�ns, %s! Seus dados foram coletados com sucesso! \n", cad.nome);
	           		printf("\t\t\t\t   Um e-mail de confima��o ser� enviado para %s\n\n\n", cad.email);
	           		printf("Pressione 0 para voltar ao menu OU pressione 1 para corrigir seus dados\n");
	           		scanf("%i", &sair);

		        } while(sair != 0);
	            break;
	            
	        //Pronta entrega
	        case 2:
	        	do{ 
	        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 32);
	            	system("cls");
	                printf("\n\n\t\t\t\t\tVoc� escolheu a op��o (Pronta-entrega).\n\n");
	                //borda
		           	setlocale(LC_CTYPE, "C");
	  				for(int j = 0; j<120; j++){
	    				printf("\xdf");
					}
					//permiss�o de acentua��o
					setlocale(LC_CTYPE, "portuguese");
					printf("\n\n 1 - Marca: MCLAREN          2 - Marca: BMW                3 - Marca: PORSHE                 4 - Marca: FERRARI\n");
					printf("     Modelo: ARTURA SPIDER       Modelo: Z4                    Modelo: 718 CAYMAN                Modelo: ROMA\n");
					printf("     Cor: LARANJA                Cor: BRANCA                   Cor: PRETO                        Cor: VERMELHO\n");
					printf("     Ano: 2024                   Ano: 2020                     Ano: 2023                         Ano: 2022\n");
					printf("     C�mbio: AUTOM�TICO          C�mbio: AUTOM�TICO            C�mbio: AUTOM�TICO                C�mbio: AUTOM�TICO\n");
					printf("     Dire��o: EL�TRICA           Dire��o: EL�TRICA             Dire��o: EL�TRICA                 Dire��o: EL�TRICA\n");
					printf("     Valor: 2,8 M                Valor: 460 Mil                Valor: 522 Mil                    Valor: 2,9 M\n\n\n");
					printf("\t\t\t\t\tEscolha o modelo que mais lhe agrada:\n\n\n");
					printf("\t\t\t\t\t  Para voltar ao menu pressione 0\n\t\t\t\t\t\t\t");
					scanf("%i", &pronta_entrega);
					
					//verifica��o se op��o escolhida � v�lida ou n�o
					if(pronta_entrega == 1 || pronta_entrega == 2 || pronta_entrega == 3 || pronta_entrega == 4){
						printf("Voc� escolheu a op��o %i. Sua escolha ser� encaminhada para o relat�rio!\n", pronta_entrega);
						printf("Pressione 0 para voltar ao menu:\n");
						scanf("%i", &sair);
					} else if (pronta_entrega != 0 || isalpha(pronta_entrega)){
						printf("Op��o Inv�lida.Digite 1 para voltar para escolha!\n");
						scanf("%i", &sair);
					} else if(pronta_entrega == 0){
						break;
					}
				} while(sair != 0 );
				break;
				
			// Servi�os prestados	
	        case 3:
	        	do{
	        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 96);
	            	system("cls");
	                printf("\n\n\t\t\t\t\tVoc� escolheu a op��o (Servi�os).\n\n");
					//borda
		           	setlocale(LC_CTYPE, "C");
	  				for(int j = 0; j<120; j++){
	    				printf("\xdf");
					}
					//permiss�o de acentua��o
					setlocale(LC_CTYPE, "portuguese");	
					printf("\n\t\t\t\t\t\tCONSULTE OS VALORES\n");
					printf("\n\n\n\t |-----------------------------------------------------------------------------------------------|\n");
					printf("\t |     SERVI�O     |        VE�CULOS DE 500 MIL AT� 1M          |           VE�CULOS + 1M        |\n");
					printf("\t |-----------------|--------------------------------------------|--------------------------------|\n");
					printf("\t | Troca de �leo   |                R$ 3000                     |              R$ 5000           |\n");
					printf("\t | Troca de pneus  |         R$ 2000 + Valor dos pneus          |      R$ 5000 + valor dos pneus |\n");
					printf("\t | Revis�o Completa|                R$ 4500                     |               R$ 6500          |\n");
					printf("\t |-----------------------------------------------------------------------------------------------|\n\n");
					printf("\t\tPara cada servi�o, aperte '1' para ve�culos de 500 mil at� 1M e '2' para os de + de 1M\n\n");
					printf("\t\t\t\t\tCaso n�o deseje o servi�o pressione 0\n");
					printf("Troca de �leo >> ");
					scanf("%i", &ser.oleo);
					printf("Troca de pneus >> ");
					scanf("%i", &ser.pneu);
					printf("Revis�o completa >> ");
					scanf("%i", &ser.revisao);
					if(ser.oleo!=0 || ser.pneu!=0 || ser.revisao!=0){
						printf("\033[32m Servi�os cadastrados com sucesso! Ser�o emcaminhados para o relat�rio\n");
						printf("\033[30mPressione 0 para sair e 1 para corrigir os servi�os\n");
					}else{
						printf("Pressione 0 para voltar ao menu:\n");
					}
					
					scanf("%i", &sair);
				} while(sair != 0);
	            break;
	            
	        case 4:
	        //Sobre n�s
	        	do{
	        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 241);
	            	system("cls");
	                printf("\n\n\t\t\t\t\tVoc� escolheu a op��o (Sobre N�s).\n\n");
	                //borda
		           	setlocale(LC_CTYPE, "C");
	  				for(int j = 0; j<120; j++){
	    				printf("\xdf");
					}
					//permiss�o de acentua��o
					setlocale(LC_CTYPE, "portuguese");
	                printf("\n\n\t\t\t\t\t      Fundada em 2024,\n");
					printf("\t\t\t\t  a G-CAR nasceu da vis�o de proporcionar\n");
					printf("\t\t\t  aos nossos clientes uma sele��o exclusiva de ve�culos premium.\n");
					printf("\t  Desde ent�o, temos nos esfor�ado para ser refer�ncia no mercado de autom�veis de alto padr�o.\n\n\n\n\n");
					printf("\t\t\t\t\t             _______      \n");
    				printf("\t\t\t\t\t            //  ||\\ \\     \n");
    				printf("\t\t\t\t\t      _____//___||_\\ \\___ \n");
    				printf("\t\t\t\t\t      )  _          _    \\ \n");
    				printf("\t\t\t\t\t      |_/ \\________/ \\___|\n");
    				printf("\t\t\t\t\t      __\\_/________\\_/____\n\n\n");
	                printf("\t\t\t\t\tPara voltar ao menu, pressione 0\n\t\t\t\t\t\t\t");
	                scanf("%i", &sair);
				} while(sair != 0);
	            break;
	            
	        //Relat�rio final
	        case 5:
	        	do{
	        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 128);
	            	system("cls");
	            	printf("\n\n\t\t\t\t\tVoc� escolheu a op��o (Relat�rio).\n\n");
	            	//borda
		           	setlocale(LC_CTYPE, "C");
	  				for(int j = 0; j<120; j++){
	    				printf("\xdf");
					}
					//permiss�o de acentua��o
					setlocale(LC_CTYPE, "portuguese");
					
					//verifia��o de cadastro feito ou n�o
	            	if(cad.nome[0] == '0'){
	            		printf("\n\n\t[ERRO]Impossivel acessar sem cadastro. Por favor, pressione 0, volte e realize seu cadastro para prosseguir.");
	            		scanf("%i", &sair);
					} else if(cad.nome[0] != '0'){
						printf("\n\n\033[37m     Bem-vindo ao relat�rio, %s. Aqui voc� poder� rever suas op��es escolhidas em nosso site e confirmar sua compra.\n\n\n", cad.nome);
						
						//op��es escolhidas na pronta entrega
						printf("\t\t\t\t\t\t\033[34m PRONTA ENTREGA:\n\n");
						switch (pronta_entrega){
							case 0:
								printf("\033[31m- N�o h� produtos pronta-entrega escolhidos\n\n");
								break;
							case 1:
								printf("- Voc� escolheu o modelo 1: %s %s.\n\033[30m Valor : R$ %i\n\n", m1.marca, m1.modelo, m1.valor);
								precoCarro = m1.valor;
								break;
							case 2:
								printf("- Voc� escolheu o modelo 2: %s %s.\n\033[30m Valor : R$ %i\n\n", m2.marca, m2.modelo, m2.valor);
								precoCarro = m2.valor;
								break;
							case 3:
								printf("- Voc� escolheu o modelo 3: %s %s.\n\033[30m Valor : R$ %i\n\n", m3.marca, m3.modelo, m3.valor);
								precoCarro = m3.valor;
								break;
							case 4:
								printf("- Voc� escolheu o modelo 4: %s %s.\n\033[30m Valor : R$ %i\n\n", m4.marca, m4.modelo, m4.valor);
								precoCarro = m4.valor;
								break;
						}
						
						
						//op��es escolhidas em servi�os
						printf("\t\t\t\t\t\t\033[33m    SERVI�OS:\n\n");
						//Quais servi�os foram escolhidos ou se n�o foram
						//trocade �leo
						printf("\033[33m*Troca de �leo:\n");
						 if(ser.oleo == 1){
							precoOleo = 3000;
							printf("\033[30mVoc� selecionou troca de �leo para ve�culos at� 1M\n");
							printf("VALOR: R$ %.2f\n\n", precoOleo);
						} else if(ser.oleo == 2){
							precoOleo = 5000;
							printf("\033[30mVoc� selecionou troca de �leo para ve�culos + 1M\n");
							printf("VALOR: R$ %.2f\n\n", precoOleo);
						} else{
							printf("\t\033[30m-\n");
						}
						
						//pneus
						printf("\033[33m*Troca de pneus:\n");
						if(ser.pneu == 1){
							precoPneu = 2000;
							printf("\033[30mVoc� selecionou troca de pneus para ve�culos at� 1M\n");
							printf("VALOR: R$ %.2f\n\n", precoPneu);
						} else if(ser.pneu == 2){
							precoPneu = 5000;
							printf("\033[30mVoc� selecionou troca de pneus para ve�culos + 1M\n");
							printf("VALOR: R$ %.2f\n\n", precoPneu);
						} else{
							printf("\t\033[30m-\n");
						}
						
						//revis�o 
						printf("\033[33m*Revis�o Completa:\n");
						 if(ser.revisao == 1){
							precoRevisao = 4500;
							printf("\033[30mVoc� selecionou Revis�o Completa para ve�culos at� 1M\n");
							printf("VALOR: R$ %.2f\n", precoRevisao);
						} else if(ser.revisao == 2){
							precoRevisao = 6500;
							printf("\033[30mVoc� selecionou Revis�o Completa para ve�culos + 1M\n");
							printf("VALOR: R$ %.2f\n", precoRevisao);
						} else{
							printf("\t\033[30m-\n");
						}
						
						//soma do total
						float total = precoCarro + precoRevisao + precoPneu + precoOleo;
						printf("\t\t\t\t\t\033[30m  TOTAL DA COMPRA:\033[32m R$ %.2f\n", total);
						printf("\033[30mPressione 0 para sair\n");
						scanf("%i", &sair);
					}
				}while(sair != 0);
				break;
			//sair do programa
	        case 0:
	        	system("cls");
	            printf("\n\n\t\t\t\t\tSaindo do programa... At� mais!\n");
	            break;
	    }
	} while(opcao != 0);
}
