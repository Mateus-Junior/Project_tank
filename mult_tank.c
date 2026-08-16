
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
	int area, origen_i[2], origen_j[2], torre_origem_i[2], torre_origem_j[2], torre_modo[2], tiro_modo[2], tiro_origen_i[2],tiro_origen_j[2],tiro_cont[2];
	char resposta_2,torre_canhao[2];
	
	torre_modo[1] = 0;
	tiro_modo[1] = 0;
	tiro_cont[1] = 0;
	
	area = 20;
	origen_i[1] = 2;
	origen_j[1] = 2;
	
	
	Porigen_i = &origen_i[1];
	Porigen_j = &origen_j[1];
	Ptorre_modo = &torre_modo[1];
	Parea = &area;
	Ptiro_origen_i = &tiro_origen_i[1];
	Ptiro_origen_j = &tiro_origen_j[1];
	Ptiro_modo = &tiro_modo[1];
	Ptiro_cont = &tiro_cont[1];
	
	while(1){
		for(int i = 1; i <= area; i++){
			for(int j = 1; j <= area*2; j++){
				
				if (torre_modo[1] == 0){
					torre_origem_i[1] = origen_i[1];
					torre_origem_j[1] = origen_j[1]+1;
					torre_canhao[1] = '-';
				}
				if (torre_modo[1] == 1){
					torre_origem_i[1] = origen_i[1]+1;
					torre_origem_j[1] = origen_j[1]+1;
					torre_canhao[1] = '\\';
				}
				if (torre_modo[1] == 2){
					torre_origem_i[1] = origen_i[1]+1;
					torre_origem_j[1] = origen_j[1];
					torre_canhao[1] = '|';
				}
				if (torre_modo[1] == 3){
					torre_origem_i[1] = origen_i[1]+1;
					torre_origem_j[1] = origen_j[1]-1;
					torre_canhao[1] = '/';
				}
				if (torre_modo[1] == 4){
					torre_origem_i[1] = origen_i[1];
					torre_origem_j[1] = origen_j[1]-1;
					torre_canhao[1] = '-';
				}
				if (torre_modo[1] == 5){
					torre_origem_i[1] = origen_i[1]-1;
					torre_origem_j[1] = origen_j[1]-1;
					torre_canhao[1] = '\\';
				}
				if (torre_modo[1] == 6){
					torre_origem_i[1] = origen_i[1]-1;
					torre_origem_j[1] = origen_j[1];
					torre_canhao[1] = '|';
				}
				if (torre_modo[1] == 7){
					torre_origem_i[1] = origen_i[1]-1;
					torre_origem_j[1] = origen_j[1]+1;
					torre_canhao[1] = '/';
				}
				
				if(i == origen_i[1] && j == origen_j[1] ){
					printf("o");
					}
				
				else if((tiro_cont[1] > 0)&&((i == tiro_origen_i[1] )&&(j == tiro_origen_j[1]))){
					printf("*");
				}
					
				else if ((i == torre_origem_i[1] && j == torre_origem_j[1])){
					printf("%c",torre_canhao[1]);
					}
					
				else if((((i == origen_i[1]+1)||(i == origen_i[1]-1))&&(j == origen_j[1] ||j == origen_j[1]+1 ||j == origen_j[1]-1))|| ((i == origen_i[1]) && ( j == origen_j[1]+1 || j == origen_j[1]-1))){
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
				if(torre_modo[1] == 0){
						tiro_origen_j[1]++;
						}
					if(torre_modo[1] == 1){
						tiro_origen_i[1]++;
						tiro_origen_j[1]++;
						}
					if(torre_modo[1] == 2){
						tiro_origen_i[1]++;
						}
					if(torre_modo[1] == 3){
						tiro_origen_i[1]++;
						tiro_origen_j[1]--;
						}
					if(torre_modo[1] == 4){
						tiro_origen_j[1]--;
						}
					if(torre_modo[1] == 5){
						tiro_origen_i[1]--;
						tiro_origen_j[1]--;
						}
					if(torre_modo[1] == 6){
						tiro_origen_i[1]--;
						}
					if(torre_modo[1] == 7){
						tiro_origen_i[1]--;
						tiro_origen_j[1]++;
						}
						
					tiro_cont[1]--;
					}
		}
		
			

	}	
