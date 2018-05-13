	#include <stdio.h>
	#include <stdlib.h>
	#define A 5
	#define B 5
	
	
	int main(){
		int fila_pref[A];
		int fila_normal[B];
		int n = 0; 
		int opt;
		int i = A;
		int a = B;
		
			while(1>n)
				{
					printf("\n\n Digite:\n (1)Para atendimento preferencial \n (2)Para atendimento normal \n (3)Remover da fila \n (4)Para listar a fila \n (5)Para sair \n ");
					scanf("%d", &opt);
					switch(opt)
					{
						case 1:
						if(i==0){
						printf("\n Fila preferencial cheia!! \n");
						printf("\n Digite outra opcao diferente \n");
						}else{
						printf("\n Digite o valor para colocar na fila preferencial: ");
						scanf("%d",&fila_pref[i]);
						i--;
						}
						 break;
						 
						case 2:
						if(a==0){
						printf("\n Fila normal cheia!! \n");
						printf("\n Digite outra opcao diferente \n");
						}else{
							printf("\n Digite o valor para colocar na fila preferencial: ");
						scanf("%d",&fila_normal[a]);
						a--;
						}
						 break;
						
					    
						case 3: 
						if(i>=0 && i<A){
						i = i+1;
						printf("%d", i);
						printf("\n %d  saiu da fila prefencial: ", fila_pref[i]);
						}else if(a>=0 && a<B){
						a = a+1;
						printf("\n %d  saiu da fila normal: ", fila_normal[a]);					
						}else{printf("Não há mais fila");
						}
					    break;
							
						
						case 4:
						printf("Fila preferencial ");
						for(int r=A; r>i;r--){
							printf(" %d , ", fila_pref[r]);	
						}
						printf("Fila Normal");
						for(int r=B; r>a ;r--){
							printf(" %d , ", fila_normal[r]);	
						}
						break;
						
						case 5:
							n = 2 ;
						break;
						
						
						default:
		          			printf("\n Opcao invalida\n ");
		         		break;
						
					}
				}	
	
		
		
		
		
	}
