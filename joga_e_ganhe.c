#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<time.h>

int main(){
	int res;
	//titulo do programa 
	SetConsoleTitle("Joga e Ganhe");
  // comando de regionaliza��o
    setlocale(LC_ALL,"portuguese");
     srand(time(NULL)); //semente para gerar numero aleatorios
   while(res != 2){
   jogo();
   printf("\t\n1-jogar novamente ");	
   printf("\t\n2-sair");
   printf("Sua escolha:: ");
   scanf("%d",&res);
   if(res==2){
   	break;
   } 
}
   return 0;
}
void jogo(){//n\\\
	system("cls");
  
  int c;
  int compu,esc,a;
  system("color 0f");
  printf("\t\t\t\t\twelcome to the game"); 
  printf("\n\t\t\t\t\t  play and win\n");
  printf("\n  O Joga e Ganhe funciona da seguinte forma:\n  O jogador devera inserir um numero de 1 � 10 e o joga vai sortear um numero de 1 � 10 \n  Se o numero que o jogador inseriu for igual ao numero que o jogo sorteio,o jogador ganhou caso n�o o jogador perdeu\n");	
  printf("pressione ENTER para continuar");
  do{
  	c = getch();
  	
  }while(c != 13);
  system("cls");
  system("color 4f");
  printf("\n\t�nsira um numero de 1 � 10: ");
  scanf("%d",&esc);
  
  while(esc>10){
  
  printf("\n%d � maior que 10",esc);
  printf("\nDigite um numero menor que 10\n");
  system("pause");
  system("cls");
  system("color 4f");
  printf("\n\t�nsira outro numero de 1 � 10: ");
  scanf("%d",&esc);
 
  }
  
  compu = (rand()%10)+1;
  if(esc==compu){
  	printf("\nVo�� ganhou, pare�e que vo�� tem sorte\n");
  	printf("\n%d � igual a %d\n",compu,esc);
  	printf("\n%d � = %d\n",compu,esc);
  }else{
	printf("\nVo�� perdeu, Tente Novamente\n");
  	printf("\n%d � difirente que %d\n",compu,esc);
  	printf("\n%d � != %d\n",compu,esc);
  }

  
  printf("\nNumero Sorteado Pelo Computador: %d",compu);
  printf("\nNumero Inserido Pelo jogador: %d",esc);
  
}


