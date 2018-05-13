		#include <Stdio.h>
		#include <stdlib.h>
		#define MAX 5
				
		int main ()
		{
		 int pilha[MAX];
		 int opt;
		 int i = 0;
		 int n = 0; 
		 
		 
		while(1>n)
			{
				
				printf("\n\n Digite:\n\t (1)Para empilhar \n\t (2)Para desempilhar \n\t (3)Para listar a pilha \n\t (4)Para sair \n ");
				scanf("%d", &opt);
				switch(opt)
				{
					case 1:
					if(i>=MAX){
					printf("\n Pilha cheia!! \n");
					printf("\n Digite outra opcao diferente \n");
					}else{
					printf("\n Digite o valor para colocar na pilha: ");
					scanf("%d",&pilha[i]);
					i++;
					}
					 break;
					 
					case 2:
					
					if(i>=0){
					i = i-1;
					printf("\n %d foi desempilhado: ", pilha[i]);	
				    break;}else{printf("Pilha vazia\n");
					}
				    
					case 3: 
					printf("\n \n \n \n ");
					for(int a=0; a<i;a++){
						printf(" %d , ", pilha[a]);	
					}			
					break;
					
					case 4:
						n = 2;					
					break;
					
					default:
	          			printf("\n Opcao invalida\n ");
	         		break;
				
				}
			}	

		}
