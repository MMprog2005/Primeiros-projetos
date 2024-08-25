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
	//minhas váriaveis numericas;
	int opcao, pronta_entrega = 0, sair;	
	float precoCarro = 0, precoOleo = 0, precoRevisao = 0, precoPneu = 0;
	
	//minhas structs:
	
	//struct de informações cadastrais
	struct cadastro{
		char nome[50] = "0";
		int cpf[20]; 
		char email[50];
		int tel[10];
	};
	struct cadastro cad;
	
	//struct de serviços
	struct servicos{
		int oleo = 0;
		int pneu = 0;
		int revisao = 0;
	};
	struct servicos ser;
	
	//structs de modelos dos veículos:
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
		//permissão de acentuação
		setlocale(LC_ALL, "Portuguese");
		//mudança de cor do sistema
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
		//permissão de acentuação
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
	    printf("\tººººººººººººººººººººººººººººººººººººººCONCESSIONÁRIA G-CARººººººººººººººººººººººººººººººººººººººººº\n\n\n");
		printf("\t\t\t\t\t\t 1 - Cadastro\n");
	    printf("\t\t\t\t\t 2 - Automóveis Pronta-entrega\n");
	    printf("\t\t\t\t\t\t 3 - Serviços\n");
	    printf("\t\t\t\t\t\t 4 - Sobre Nós\n");
	    printf("\t\t\t\t\t\t 5 - Relatório\n");
	    printf("\t\t\t\t\t Pressione 0 para sair do programa\n\n");
	
	
		printf("\n\t\t\t\t\t\tEscolha uma opção: ");
	    //leitura da opção
	    scanf("%i", &opcao);
	    
	    //estrutura condicional para a opção escolhida
	  	switch (opcao) {
	  		//cadastro
	        case 1:
	        	//repetição para sair da página quando a variável "sair" == 0
	        	do{
	        		
	        		//função para mudar a cor da tela
		        	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 16);
		        	system("cls");
		        	
		            printf("\n\n\t\t\t\t\tVocê escolheu a opção (Cadastro).\n\n");
		            
		            //borda
		           	setlocale(LC_CTYPE, "C");
	  				for(int j = 0; j<120; j++){
	    				printf("\xdf");
					}
					//permissão de acentuação
					setlocale(LC_CTYPE, "portuguese");
					
		            printf("\n\n\t\t\t  Caso não queira se cadastrar, pressione 0 para voltar ao menu.\n\n\n");
		           	printf("\033[37m Digite seu nome>>> ");
		           	fflush(stdin);
		           	//scanf para leitura de Strings com espaços
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
	           	
	           		printf("\n\n\t\t\t\t\033[32m Parabéns, %s! Seus dados foram coletados com sucesso! \n", cad.nome);
	           		printf("\t\t\t\t   Um e-mail de confimação será enviado para %s\n\n\n", cad.email);
	           		printf("Pressione 0 para voltar ao menu OU pressione 1 para corrigir seus dados\n");
	           		scanf("%i", &sair);

		        } while(sair != 0);
	            break;
	            
	        //Pronta entrega
	        case 2:
	        	do{ 
	        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 32);
	            	system("cls");
	                printf("\n\n\t\t\t\t\tVocê escolheu a opção (Pronta-entrega).\n\n");
	                //borda
		           	setlocale(LC_CTYPE, "C");
	  				for(int j = 0; j<120; j++){
	    				printf("\xdf");
					}
					//permissão de acentuação
					setlocale(LC_CTYPE, "portuguese");
					printf("\n\n 1 - Marca: MCLAREN          2 - Marca: BMW                3 - Marca: PORSHE                 4 - Marca: FERRARI\n");
					printf("     Modelo: ARTURA SPIDER       Modelo: Z4                    Modelo: 718 CAYMAN                Modelo: ROMA\n");
					printf("     Cor: LARANJA                Cor: BRANCA                   Cor: PRETO                        Cor: VERMELHO\n");
					printf("     Ano: 2024                   Ano: 2020                     Ano: 2023                         Ano: 2022\n");
					printf("     Câmbio: AUTOMÁTICO          Câmbio: AUTOMÁTICO            Câmbio: AUTOMÁTICO                Câmbio: AUTOMÁTICO\n");
					printf("     Direção: ELÉTRICA           Direção: ELÉTRICA             Direção: ELÉTRICA                 Direção: ELÉTRICA\n");
					printf("     Valor: 2,8 M                Valor: 460 Mil                Valor: 522 Mil                    Valor: 2,9 M\n\n\n");
					printf("\t\t\t\t\tEscolha o modelo que mais lhe agrada:\n\n\n");
					printf("\t\t\t\t\t  Para voltar ao menu pressione 0\n\t\t\t\t\t\t\t");
					scanf("%i", &pronta_entrega);
					
					//verificação se opção escolhida é válida ou não
					if(pronta_entrega == 1 || pronta_entrega == 2 || pronta_entrega == 3 || pronta_entrega == 4){
						printf("Você escolheu a opção %i. Sua escolha será encaminhada para o relatório!\n", pronta_entrega);
						printf("Pressione 0 para voltar ao menu:\n");
						scanf("%i", &sair);
					} else if (pronta_entrega != 0 || isalpha(pronta_entrega)){
						printf("Opção Inválida.Digite 1 para voltar para escolha!\n");
						scanf("%i", &sair);
					} else if(pronta_entrega == 0){
						break;
					}
				} while(sair != 0 );
				break;
				
			// Serviços prestados	
	        case 3:
	        	do{
	        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 96);
	            	system("cls");
	                printf("\n\n\t\t\t\t\tVocê escolheu a opção (Serviços).\n\n");
					//borda
		           	setlocale(LC_CTYPE, "C");
	  				for(int j = 0; j<120; j++){
	    				printf("\xdf");
					}
					//permissão de acentuação
					setlocale(LC_CTYPE, "portuguese");	
					printf("\n\t\t\t\t\t\tCONSULTE OS VALORES\n");
					printf("\n\n\n\t |-----------------------------------------------------------------------------------------------|\n");
					printf("\t |     SERVIÇO     |        VEÍCULOS DE 500 MIL ATÉ 1M          |           VEÍCULOS + 1M        |\n");
					printf("\t |-----------------|--------------------------------------------|--------------------------------|\n");
					printf("\t | Troca de óleo   |                R$ 3000                     |              R$ 5000           |\n");
					printf("\t | Troca de pneus  |         R$ 2000 + Valor dos pneus          |      R$ 5000 + valor dos pneus |\n");
					printf("\t | Revisão Completa|                R$ 4500                     |               R$ 6500          |\n");
					printf("\t |-----------------------------------------------------------------------------------------------|\n\n");
					printf("\t\tPara cada serviço, aperte '1' para veículos de 500 mil até 1M e '2' para os de + de 1M\n\n");
					printf("\t\t\t\t\tCaso não deseje o serviço pressione 0\n");
					printf("Troca de óleo >> ");
					scanf("%i", &ser.oleo);
					printf("Troca de pneus >> ");
					scanf("%i", &ser.pneu);
					printf("Revisão completa >> ");
					scanf("%i", &ser.revisao);
					if(ser.oleo!=0 || ser.pneu!=0 || ser.revisao!=0){
						printf("\033[32m Serviços cadastrados com sucesso! Serão emcaminhados para o relatório\n");
						printf("\033[30mPressione 0 para sair e 1 para corrigir os serviços\n");
					}else{
						printf("Pressione 0 para voltar ao menu:\n");
					}
					
					scanf("%i", &sair);
				} while(sair != 0);
	            break;
	            
	        case 4:
	        //Sobre nós
	        	do{
	        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 241);
	            	system("cls");
	                printf("\n\n\t\t\t\t\tVocê escolheu a opção (Sobre Nós).\n\n");
	                //borda
		           	setlocale(LC_CTYPE, "C");
	  				for(int j = 0; j<120; j++){
	    				printf("\xdf");
					}
					//permissão de acentuação
					setlocale(LC_CTYPE, "portuguese");
	                printf("\n\n\t\t\t\t\t      Fundada em 2024,\n");
					printf("\t\t\t\t  a G-CAR nasceu da visão de proporcionar\n");
					printf("\t\t\t  aos nossos clientes uma seleção exclusiva de veículos premium.\n");
					printf("\t  Desde então, temos nos esforçado para ser referência no mercado de automóveis de alto padrão.\n\n\n\n\n");
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
	            
	        //Relatório final
	        case 5:
	        	do{
	        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 128);
	            	system("cls");
	            	printf("\n\n\t\t\t\t\tVocê escolheu a opção (Relatório).\n\n");
	            	//borda
		           	setlocale(LC_CTYPE, "C");
	  				for(int j = 0; j<120; j++){
	    				printf("\xdf");
					}
					//permissão de acentuação
					setlocale(LC_CTYPE, "portuguese");
					
					//verifiação de cadastro feito ou não
	            	if(cad.nome[0] == '0'){
	            		printf("\n\n\t[ERRO]Impossivel acessar sem cadastro. Por favor, pressione 0, volte e realize seu cadastro para prosseguir.");
	            		scanf("%i", &sair);
					} else if(cad.nome[0] != '0'){
						printf("\n\n\033[37m     Bem-vindo ao relatório, %s. Aqui você poderá rever suas opções escolhidas em nosso site e confirmar sua compra.\n\n\n", cad.nome);
						
						//opções escolhidas na pronta entrega
						printf("\t\t\t\t\t\t\033[34m PRONTA ENTREGA:\n\n");
						switch (pronta_entrega){
							case 0:
								printf("\033[31m- Não há produtos pronta-entrega escolhidos\n\n");
								break;
							case 1:
								printf("- Você escolheu o modelo 1: %s %s.\n\033[30m Valor : R$ %i\n\n", m1.marca, m1.modelo, m1.valor);
								precoCarro = m1.valor;
								break;
							case 2:
								printf("- Você escolheu o modelo 2: %s %s.\n\033[30m Valor : R$ %i\n\n", m2.marca, m2.modelo, m2.valor);
								precoCarro = m2.valor;
								break;
							case 3:
								printf("- Você escolheu o modelo 3: %s %s.\n\033[30m Valor : R$ %i\n\n", m3.marca, m3.modelo, m3.valor);
								precoCarro = m3.valor;
								break;
							case 4:
								printf("- Você escolheu o modelo 4: %s %s.\n\033[30m Valor : R$ %i\n\n", m4.marca, m4.modelo, m4.valor);
								precoCarro = m4.valor;
								break;
						}
						
						
						//opções escolhidas em serviços
						printf("\t\t\t\t\t\t\033[33m    SERVIÇOS:\n\n");
						//Quais serviços foram escolhidos ou se não foram
						//trocade óleo
						printf("\033[33m*Troca de óleo:\n");
						 if(ser.oleo == 1){
							precoOleo = 3000;
							printf("\033[30mVocê selecionou troca de óleo para veículos até 1M\n");
							printf("VALOR: R$ %.2f\n\n", precoOleo);
						} else if(ser.oleo == 2){
							precoOleo = 5000;
							printf("\033[30mVocê selecionou troca de óleo para veículos + 1M\n");
							printf("VALOR: R$ %.2f\n\n", precoOleo);
						} else{
							printf("\t\033[30m-\n");
						}
						
						//pneus
						printf("\033[33m*Troca de pneus:\n");
						if(ser.pneu == 1){
							precoPneu = 2000;
							printf("\033[30mVocê selecionou troca de pneus para veículos até 1M\n");
							printf("VALOR: R$ %.2f\n\n", precoPneu);
						} else if(ser.pneu == 2){
							precoPneu = 5000;
							printf("\033[30mVocê selecionou troca de pneus para veículos + 1M\n");
							printf("VALOR: R$ %.2f\n\n", precoPneu);
						} else{
							printf("\t\033[30m-\n");
						}
						
						//revisão 
						printf("\033[33m*Revisão Completa:\n");
						 if(ser.revisao == 1){
							precoRevisao = 4500;
							printf("\033[30mVocê selecionou Revisão Completa para veículos até 1M\n");
							printf("VALOR: R$ %.2f\n", precoRevisao);
						} else if(ser.revisao == 2){
							precoRevisao = 6500;
							printf("\033[30mVocê selecionou Revisão Completa para veículos + 1M\n");
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
	            printf("\n\n\t\t\t\t\tSaindo do programa... Até mais!\n");
	            break;
	    }
	} while(opcao != 0);
}
