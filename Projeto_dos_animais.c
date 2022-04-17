#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
		
		// VETORES _________________________________________
		char subclasse[3][10] = {"Mamífero", "Ave", "Réptil"}; 
		char mamiferos[4][10] =	{"Quadúpede", "Bípede", "Voador", "Aquático"};  
		char aves[3][12] =	{"Não-voadora", "Nadadora", "De rapina"};  
		char repteis[3][10] = {"Com casco", "Carnívoro", "Sem pata"};  
		char mq_alimentar[2][10] = {"Carnívoro", "Herbívoro"}; 
		char mb_alimentar[2][10] = {"Onívoro", "Frutívoro"};
		char ave_local[2][10] = {"Tropical", "Polar"};
		char animais_m[6][10] = {"Leão", "Cavalo", "Homem", "Macaco", "Morcego", "Baleia"};
		char animais_a[4][10] = {"Avestruz", "Pinguim", "Pato", "Águia"};
		char animais_r[3][10] = {"Tartaruga", "Crocodilo", "Cobra"};
		
		// VARIAVEIS AUXILIARES______________________________
		char decisao;									
		int aux;
		int i,j,k;
		// __________________________________________________					
		for(i = 0; i< 3; i++){
			printf ("\nÉ %s ? (S/N): ", &subclasse[i]);
			scanf ("%c",&decisao);
			fflush(stdin);
			if(decisao =='S' && i == 0){
				for(j = 0; j<4; j++){
					printf ("\nÉ %s ? (S/N): ", &mamiferos[j]);
					scanf ("%c",&decisao);
					fflush(stdin);
					if(decisao =='S' && j == 0){
						for( k = 0; k<2; k++){
							printf ("\nÉ %s ? (S/N): ", &mq_alimentar[k]);
							scanf ("%c",&decisao);
							fflush(stdin);
							if(decisao =='S' && k == 0){
								aux = 0;
								break;
							}else if (decisao =='S' && k == 1){
								aux = 1;
								break;
							}else if (decisao =='N' && k == 1){
								aux = 6;
								break;
							}
						}break;
					}else if(decisao =='S' && j == 1){
						for( k = 0; k<2; k++){
							printf ("\nÉ %s ? (S/N): ", &mb_alimentar[k]);
							scanf ("%c",&decisao);
							fflush(stdin);
							if(decisao =='S' && k == 0){
								aux = 2;
								break;
							}else if(decisao =='S' && k == 1){
								aux = 3;
								break;
							}else if(decisao =='N' && k == 1){
								aux = 6;
								break;
							}
						}break;
					}else if(decisao =='S' && j == 2){
						aux = 4;
						break;
					}else if(decisao =='S' && j == 3){
						aux = 5;
						break;
					}else if(decisao =='N' && j == 3){
						aux = 6;
						break;
					}
				}
				if(aux > 5){
					printf("\n\n - - - NÃO ENCONTRADO! - - -");
					break;
				}else {
					printf ("\nÉ um(a): %s ", &animais_m[aux]);
					break;
				}
				
			}else if(decisao =='S' && i == 1){
				for( j = 0; j<3; j++){
					printf ("\nÉ %s ? (S/N): ", &aves[j]);
					scanf ("%c",&decisao);
					fflush(stdin);
					if(decisao =='S' && j == 0){
						for( k = 0; k<2; k++){
							printf ("\nÉ %s ? (S/N): ", &ave_local[k]);
							scanf ("%c",&decisao);
							fflush(stdin);
							if(decisao =='S' && k == 0){
								aux = 0;
								break;
							}else if(decisao =='S' && k == 1){
								aux = 1;
								break;
							}else if(decisao =='N' && k == 1){
								aux = 4;
								break;
							}
						}break;
					}else if(decisao =='S' && j == 1){
						aux = 2;
						break;
					}else if(decisao =='S' && j == 2){
						aux = 3;
						break;
					}else if (decisao =='N' && j == 2){
						aux = 4;
						break;
					}
				}
				if(aux > 3){
					printf("\n\n - - - NÃO ENCONTRADO! - - -");
					break;
				}else {
					printf ("\nÉ um(a): %s ", &animais_a[aux]);
					break;
				}	
			}else if (decisao == 'S' && i == 2){
				for(j = 0; j<3; j++){
					printf ("\nÉ %s ? (S/N): ", &repteis[j]);
					scanf ("%c",&decisao);
					fflush(stdin);
					if(decisao =='S' && j == 0){
						aux = 0;
						break;
					}else if(decisao =='S' && j == 1){
						aux = 1;
						break;
					}else if(decisao =='S' && j == 2){
						aux = 2;
						break;
					}else if (decisao =='N' && j == 2){
						aux = 3;
						break;
					}
					
				}
				if(aux > 2){
					printf("\n\n - - - NÃO ENCONTRADO! - - -");
					break;
				}else {
					printf ("\nÉ um(a): %s ", &animais_r[aux]);
					break;
				}
			}				
									  
		}
	printf("\n\n\nPressione ENTER para SAIR\n");  
	getch();
	return 0;			
}


