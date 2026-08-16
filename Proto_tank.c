
#include <stdio.h>


	int *Porigen_i = NULL;
	int *Porigen_j = NULL;
	int *Ptorre_modo = NULL;
	int *Parea = NULL;
	int *Ptiro_origen_i = NULL;
	int *Ptiro_origen_j = NULL;
	int *Ptiro_modo = NULL;
	int *Ptiro_cont = NULL;
	
void move_tank( char para_onde_move){
	
	if (para_onde_move == 'w'){
		if(*Porigen_i-2 > 0){
			*Porigen_i = *Porigen_i-1;
			}
		}
			
	if (para_onde_move == 's'){
		if(*Porigen_i+1 < *Parea){
			*Porigen_i = *Porigen_i+1;
			}
		}
			
	if (para_onde_move == 'd'){
		if(*Porigen_j+1 < *Parea*2){
			*Porigen_j = *Porigen_j+1;
			}
		}
			
	if (para_onde_move == 'a'){
		if(*Porigen_j-2 > 0 ){
			*Porigen_j = *Porigen_j-1;
			}
		}
		
	if (para_onde_move == 'j'){
		if (*Ptorre_modo == 0){
			*Ptorre_modo = 7;
			}
			else{
				*Ptorre_modo = *Ptorre_modo-1;
				}
		}
			
	if (para_onde_move == 'l'){
		if (*Ptorre_modo == 7){
			*Ptorre_modo = 0;
			}
			else{
				*Ptorre_modo = *Ptorre_modo+1;
				}
		}
	if (para_onde_move == 'k'){
		if(*Ptiro_cont == 0){
			*Ptiro_cont = 10;
			if (*Ptorre_modo == 0){
					*Ptiro_modo = 0;
					*Ptiro_origen_i = *Porigen_i;
					*Ptiro_origen_j = *Porigen_j+2;
					}
			if (*Ptorre_modo == 1){
					*Ptiro_modo = 1;
					*Ptiro_origen_i = *Porigen_i+2;
					*Ptiro_origen_j = *Porigen_j+2;
					}
			if (*Ptorre_modo == 2){
					*Ptiro_modo = 2;
					*Ptiro_origen_i = *Porigen_i+2;
					*Ptiro_origen_j = *Porigen_j;
					}
			if (*Ptorre_modo == 3){
					*Ptiro_modo = 3;
					*Ptiro_origen_i = *Porigen_i+2;
					*Ptiro_origen_j = *Porigen_j-2;
					}
			if (*Ptorre_modo == 4){
					*Ptiro_modo = 4;
					*Ptiro_origen_i = *Porigen_i;
					*Ptiro_origen_j = *Porigen_j-2;
					}
			if (*Ptorre_modo == 5){
					*Ptiro_modo = 5;
					*Ptiro_origen_i = *Porigen_i-2;
					*Ptiro_origen_j = *Porigen_j-2;
					}
			if (*Ptorre_modo == 6){
					*Ptiro_modo = 6;
					*Ptiro_origen_i = *Porigen_i-2;
					*Ptiro_origen_j = *Porigen_j;
					}
			if (*Ptorre_modo == 7){
					*Ptiro_modo = 7;
					*Ptiro_origen_i = *Porigen_i-2;
					*Ptiro_origen_j = *Porigen_j+2;
					}
			}		
		}
		
	}
	
	
int main(){
	int area, origen_i, origen_j, torre_origem_i, torre_origem_j, torre_modo = 0, tiro_modo = 0, tiro_origen_i,tiro_origen_j,tiro_cont=0;
	char resposta_2,torre_canhao;
	
	area = 20;
	origen_i = area/2+1;
	origen_j = area;
	
	
	Porigen_i = &origen_i;
	Porigen_j = &origen_j;
	Ptorre_modo = &torre_modo;
	Parea = &area;
	Ptiro_origen_i = &tiro_origen_i;
	Ptiro_origen_j = &tiro_origen_j;
	Ptiro_modo = &tiro_modo;
	Ptiro_cont = &tiro_cont;
	
	while(1){
		for(int i = 1; i <= area; i++){
			for(int j = 1; j <= area*2; j++){
				
				if (torre_modo == 0){
					torre_origem_i = origen_i;
					torre_origem_j = origen_j+1;
					torre_canhao = '-';
				}
				if (torre_modo == 1){
					torre_origem_i = origen_i+1;
					torre_origem_j = origen_j+1;
					torre_canhao = '\\';
				}
				if (torre_modo == 2){
					torre_origem_i = origen_i+1;
					torre_origem_j = origen_j;
					torre_canhao = '|';
				}
				if (torre_modo == 3){
					torre_origem_i = origen_i+1;
					torre_origem_j = origen_j-1;
					torre_canhao = '/';
				}
				if (torre_modo == 4){
					torre_origem_i = origen_i;
					torre_origem_j = origen_j-1;
					torre_canhao = '-';
				}
				if (torre_modo == 5){
					torre_origem_i = origen_i-1;
					torre_origem_j = origen_j-1;
					torre_canhao = '\\';
				}
				if (torre_modo == 6){
					torre_origem_i = origen_i-1;
					torre_origem_j = origen_j;
					torre_canhao = '|';
				}
				if (torre_modo == 7){
					torre_origem_i = origen_i-1;
					torre_origem_j = origen_j+1;
					torre_canhao = '/';
				}
				
				if(i == origen_i && j == origen_j ){
					printf("o");
					}
				
				else if((tiro_cont > 0)&&((i == tiro_origen_i )&&(j == tiro_origen_j))){
					printf("*");
				}
					
				else if ((i == torre_origem_i && j == torre_origem_j)){
					printf("%c",torre_canhao);
					}
					
				else if((((i == origen_i+1)||(i == origen_i-1))&&(j == origen_j ||j == origen_j+1 ||j == origen_j-1))|| ((i == origen_i) && ( j == origen_j+1 || j == origen_j-1))){
					printf("X");
					}
					
				else{
					printf(".");
					}
				}
			printf("\n");
			}
		
		printf("Informe a direção em q vc quer mover: e(para parar)\n");
		printf("Tank:  w(cima) s(baicho) d(direita) a(esquerda) :\n");
		printf("Torre: j(anti-horário) l(horário) k(atirar): \n");
		scanf(" %c", &resposta_2);
		
		// \e[H move o cursor para o topo, \e[2J limpa a tela visível, \e[3J limpa o buffer de rolagem
		printf("\e[1;1H\e[2J\e[3J");
		if (resposta_2 != 'e'){
		
		
			move_tank(resposta_2);
			}
		else{
			break;
			}
			
			
		if(tiro_cont > 0){
				if(tiro_modo == 0){
						tiro_origen_j = tiro_origen_j+1;
						}
					if(tiro_modo == 1){
						tiro_origen_i = tiro_origen_i+1;
						tiro_origen_j = tiro_origen_j+1;
						}
					if(tiro_modo == 2){
						tiro_origen_i = tiro_origen_i+1;
						}
					if(tiro_modo == 3){
						tiro_origen_i = tiro_origen_i+1;
						tiro_origen_j = tiro_origen_j-1;
						}
					if(tiro_modo == 4){
						tiro_origen_j = tiro_origen_j-1;
						}
					if(tiro_modo == 5){
						tiro_origen_i = tiro_origen_i-1;
						tiro_origen_j = tiro_origen_j-1;
						}
					if(tiro_modo == 6){
						tiro_origen_i = tiro_origen_i-1;
						}
					if(tiro_modo == 7){
						tiro_origen_i = tiro_origen_i-1;
						tiro_origen_j = tiro_origen_j+1;
						}
						
					tiro_cont--;
					}
		}
		
			

	}	
