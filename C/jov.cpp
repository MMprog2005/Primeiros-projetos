#include <iomanip>
#include <iostream>
using namespace std;

void abertura()
{
	printf("   |   |        Bem-vindo\n");
	printf("---+---+---     ao jogo da velha \n");
	printf("   |   | \n");
	printf("---+---+---\n");
	printf("   |   |  \n");
	printf("Selecione o modo de jogo:\n");
	printf("(1) jogador solo     (2) 2 jogadoes\n");
}

void tabuleiro(char jv[3][3])
{
	system("cls");
	printf("%c  | %c | %c\n", jv[0][0], jv[0][1], jv[0][2]);
	printf("---+---+---\n");
	printf("%c  | %c | %c\n", jv[1][0], jv[1][1], jv[1][2]);
	printf("---+---+---\n");
	printf("%c  | %c | %c \n\n", jv[2][0], jv[2][1], jv[2][2]);
}

void tb_branco(int i, int j, char jv[3][3])
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			jv[i][j] = ' ';
		}
	}
}

int main()
{

	char jv[3][3], letra, mod, x, y;
	int linha, coluna, jogo;
	int ganhou;
	int i, j;
	int pla_x = 1;
	int pla_o = 1;

	do
	{
		system("cls || clean");
		abertura();
		scanf("%c", &mod);

	} while ((mod != '1' && mod != '2') || (isalpha(mod)));

	while (mod == '2')
	{
		do
		{
			tb_branco(i, j, jv);

			// imprime o tabuleiro
			tabuleiro(jv);

			// declarando o "ganhou" como buleano
			ganhou = 0;

			// controlando o numero de jogadas enquanto nenhum dos jogadores ganha
			for (jogo = 1; jogo <= 9 && ganhou == 0; jogo++)
			{

				// definindo do jogador
				if (jogo % 2 == 1)
				{
					letra = 'X';
				}
				else
				{
					letra = 'O';
				}

				// limita as coordenadas das linas e colunas entre 1 e 3.
				// s� permite inser��o em espa�os vazios
				// usar o "-1" para facilitar a entrada do user
				do
				{
					
					printf("digite as coordenadas no formato (linha de 1 a 3), ( __ ), (coluna de 1 a 3) de %c:", letra);
					scanf("%d %d", &linha, &coluna);
				} while (linha < 1 || linha > 3 || coluna < 1 || coluna > 3 || jv[linha - 1][coluna - 1] != ' ');

				jv[linha - 1][coluna - 1] = letra;

				// impress�o do tabuleiro
				tabuleiro(jv);

				// verfica��o se o jogador ganhou pela linha
				if (jv[linha - 1][0] == jv[linha - 1][1] && jv[linha - 1][1] == jv[linha - 1][2])
				{
					ganhou = 1;
				}
				else
				{
					// verifica��o da coluna
					if (jv[0][coluna - 1] == jv[1][coluna - 1] && jv[1][coluna - 1] == jv[2][coluna - 1])
					{
						ganhou = 1;
					}
					else
					{
						// verifica��o da diagonal principal da matriz
						if (linha == coluna && jv[0][0] == jv[1][1] && jv[1][1] == jv[2][2])
						{
							ganhou = 1;
						}
						else
						{
							// verifica��o da diagonal secund�ria da matriz
							if (linha + coluna == 4 && jv[0][2] == jv[1][1] && jv[1][1] == jv[2][0])
							{
								ganhou = 1;
							}
						}
					}
				}
			}

			if (ganhou == 0)
			{
				printf("\n # VELHA #\n");
				do
				{
					printf("digite (1) para jogar novamente\n");
					scanf("%c", &x);
				} while (x != '1' || isalpha(x));
			}

			else
			{
				printf("O %c venceu!\n", letra);
				if (letra == 'X')
				{
					printf("X venceu %d vezes\n", pla_x++);
				}
				else
				{
					printf("O venceu %d vezes\n", pla_o++);
				}

				do
				{
					
					printf("digite (1) para jogar novamente\n");
					fflush(stdin);
					scanf("%c", &x);
				} while (x != '1' || isalpha(x));
			}

		} while (x == '1');
	}

	// jogo individual
	char let, jogador;

	while (mod == '1')
	{
		do
		{

			do
			{
				// escolha do jogador
				system("cls || clean");
				printf("Escolha com quem voce deseja jogar:\n");
				printf("(1) X  (2) O\n");
				scanf("%c", &let);
				printf("\n");

			} while (let != '1' && let != '2' || isalpha(let));

			tb_branco(i, j, jv);
			tabuleiro(jv);
			ganhou = 0;

			for (jogo = 1; jogo <= 9 && ganhou == 0; jogo++)
			{
				if (let == '1')
				{
					jogador = 'X';
				}
				else
				{
					jogador = 'O';
				}

				do
				{
					printf("digite as coordenadas no formato (linha de 1 a 3), ( __ ), (coluna de 1 a 3) de %c:", jogador);
					scanf("%d %d", &linha, &coluna);

				} while (linha < 1 || linha > 3 || coluna < 1 || coluna > 3 || jv[linha - 1][coluna - 1] != ' ');

				jv[linha - 1][coluna - 1] = jogador;

				tabuleiro(jv);

				// gerando numeros aleat�rios para as coordenadas
				srand (time(0));
				srand (time(0));
				int lin = rand() % 4;
				int col = rand() % 4;

				if (jogador == 'X')
				{
					while (jv[lin][col] != ' ')
					{
						lin = rand() % 4;
						col = rand() % 4;
					}

					jv[lin][col] = 'O';
				}

				if (jogador == 'O')
				{
					while (jv[lin][col] != ' ')
					{
						lin = rand() % 4;
						col = rand() % 4;
					}

					jv[lin][col] = 'X';
				}
				tabuleiro(jv);

				// verfica��o se o jogador ganhou pela linha
				if (jv[linha - 1][0] == jv[linha - 1][1] && jv[linha - 1][1] == jv[linha - 1][2])
				{
					ganhou = 1;
				}
				else
				{
					// verifica��o da coluna
					if (jv[0][coluna - 1] == jv[1][coluna - 1] && jv[1][coluna - 1] == jv[2][coluna - 1])
					{
						ganhou = 1;
					}
					else
					{
						// verifica��o da diagonal principal da matriz
						if (linha == coluna && jv[0][0] == jv[1][1] && jv[1][1] == jv[2][2])
						{
							ganhou = 1;
						}
						else
						{
							// verifica��o da diagonal secund�ria da matriz
							if (linha + coluna == 4 && jv[0][2] == jv[1][1] && jv[1][1] == jv[2][0])
							{
								ganhou = 1;
							}
						}
					}
				}
			}

			if (ganhou == 0)
			{
				printf("\n # VELHA #\n");
				do
				{
					printf("digite (1) para jogar novamente\n");
					scanf("%c", &y);
				} while (y != '1' || isalpha(y));
			}

			else
			{
				printf("O %c venceu!\n", jogador);
				if (jogador == 'X')
				{
					printf("X venceu %d vezes\n", pla_x++);
				}
				else
				{
					printf("O venceu %d vezes\n", pla_o++);
				}

				do
				{
					printf("digite (1) para jogar novamente\n");
					fflush(stdin);
					scanf("%c", &y);
				} while (y != '1' || isalpha(y));
			}
		} while (y == '1');
	}
}
