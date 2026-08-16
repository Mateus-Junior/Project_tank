
#include <stdio.h>


	int *Porigen_i = NULL;
	int *Porigen_j = NULL;
	
	int *Ptorre_modo = NULL;
	int *Ptorre_origen_i = NULL;
	int *Ptorre_origen_j = NULL;
	char *Ptorre_canhao = NULL;
	
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
	
void altera_torre_modo(){
				if (*Ptorre_modo == 0){
					*Ptorre_origen_i = *Porigen_i;
					*Ptorre_origen_j = *Porigen_j+1;
					*Ptorre_canhao = '-';
				}
				if (*Ptorre_modo == 1){
					*Ptorre_origen_i = *Porigen_i+1;
					*Ptorre_origen_j = *Porigen_j+1;
					*Ptorre_canhao = '\\';
				}
				if (*Ptorre_modo == 2){
					*Ptorre_origen_i = *Porigen_i+1;
					*Ptorre_origen_j = *Porigen_j;
					*Ptorre_canhao = '|';
				}
				if (*Ptorre_modo == 3){
					*Ptorre_origen_i = *Porigen_i+1;
					*Ptorre_origen_j = *Porigen_j-1;
					*Ptorre_canhao = '/';
				}
				if (*Ptorre_modo == 4){
					*Ptorre_origen_i = *Porigen_i;
					*Ptorre_origen_j = *Porigen_j-1;
					*Ptorre_canhao = '-';
				}
				if (*Ptorre_modo == 5){
					*Ptorre_origen_i = *Porigen_i-1;
					*Ptorre_origen_j = *Porigen_j-1;
					*Ptorre_canhao = '\\';
				}
				if (*Ptorre_modo == 6){
					*Ptorre_origen_i = *Porigen_i-1;
					*Ptorre_origen_j = *Porigen_j;
					*Ptorre_canhao = '|';
				}
				if (*Ptorre_modo == 7){
					*Ptorre_origen_i = *Porigen_i-1;
					*Ptorre_origen_j = *Porigen_j+1;
					*Ptorre_canhao = '/';
				}
	}
	
	void constroi(int y, int x){
				if(y == *Porigen_i && x == *Porigen_j ){
					printf("o");
					}
				
				else if((*Ptiro_cont > 0)&&((y == *Ptiro_origen_i )&&(x == *Ptiro_origen_j))){
					printf("*");
				}
					
				else if ((y == *Ptorre_origen_i && x == *Ptorre_origen_j)){
					printf("%c",*Ptorre_canhao);
					}
					
				else if((((y == *Porigen_i+1)||(y == *Porigen_i-1))&&(x == *Porigen_j ||x == *Porigen_j+1 ||x == *Porigen_j-1))|| ((y == *Porigen_i) && ( x == *Porigen_j+1 || x == *Porigen_j-1))){
					printf("X");
					}
					
				else{
					printf(".");
					}
				}
			
		
	void move_tiro(){
		if(*Ptiro_cont > 0){
				if(*Ptiro_modo == 0){
						*Ptiro_origen_j = *Ptiro_origen_j+1;
						}
					if(*Ptiro_modo == 1){
						*Ptiro_origen_i = *Ptiro_origen_i+1;
						*Ptiro_origen_j = *Ptiro_origen_j+1;
						}
					if(*Ptiro_modo == 2){
						*Ptiro_origen_i = *Ptiro_origen_i+1;
						}
					if(*Ptiro_modo == 3){
						*Ptiro_origen_i = *Ptiro_origen_i+1;
						*Ptiro_origen_j = *Ptiro_origen_j-1;
						}
					if(*Ptiro_modo == 4){
						*Ptiro_origen_j = *Ptiro_origen_j-1;
						}
					if(*Ptiro_modo == 5){
						*Ptiro_origen_i = *Ptiro_origen_i-1;
						*Ptiro_origen_j = *Ptiro_origen_j-1;
						}
					if(*Ptiro_modo == 6){
						*Ptiro_origen_i = *Ptiro_origen_i-1;
						}
					if(*Ptiro_modo == 7){
						*Ptiro_origen_i = *Ptiro_origen_i-1;
						*Ptiro_origen_j = *Ptiro_origen_j+1;
						}
						
					*Ptiro_cont = *Ptiro_cont-1;
					}
		}
	
	
int main(){
	int area, origen_i[2], origen_j[2], torre_origem_i[2], torre_origem_j[2], torre_modo[2], tiro_modo[2], tiro_origen_i[2],tiro_origen_j[2],tiro_cont[2], turno = 0, vida_tanque[2] ;
	char resposta_2,torre_canhao[2];
	
	vida_tanque[0] = 5;
	torre_modo[0] = 0;
	tiro_modo[0] = 0;
	tiro_cont[0] = 0;
	
	area = 19;
	origen_i[0] = 2;
	origen_j[0] = 2;
	
	vida_tanque[1] = 5;
	torre_modo[1] = 4;
	tiro_modo[1] = 4;
	tiro_cont[1] = 0;
	
	origen_i[1] = area - 1;
	origen_j[1] = area*2 - 1;

	
	while(1){
		printf("Tanque 1:%d-----------------------------Tanque 2:%d\n",vida_tanque[0], vida_tanque[1]);
		if(turno%2 == 0){
			Porigen_i = &origen_i[0];
			Porigen_j = &origen_j[0];
	
			Ptorre_modo = &torre_modo[0];
			Ptorre_origen_i = &torre_origem_i[0];
			Ptorre_origen_j = &torre_origem_j[0];
			Ptorre_canhao = &torre_canhao[0];
	
			Ptiro_origen_i = &tiro_origen_i[0];
			Ptiro_origen_j = &tiro_origen_j[0];
			Ptiro_modo = &tiro_modo[0];
			Ptiro_cont = &tiro_cont[0];
		}	
		else{
			Porigen_i = &origen_i[1];
			Porigen_j = &origen_j[1];
	
			Ptorre_modo = &torre_modo[1];
			Ptorre_origen_i = &torre_origem_i[1];
			Ptorre_origen_j = &torre_origem_j[1];
			Ptorre_canhao = &torre_canhao[1];
	
			Ptiro_origen_i = &tiro_origen_i[1];
			Ptiro_origen_j = &tiro_origen_j[1];
			Ptiro_modo = &tiro_modo[1];
			Ptiro_cont = &tiro_cont[1];
			}
	
		Parea = &area;
		altera_torre_modo();
		
		for(int i = 1; i <= area; i++){
			for(int j = 1; j <= area*2; j++){
				
				
				constroi(i, j);
				
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
		
		move_tiro();
		
		if((tiro_origen_i[0] == origen_i[1]) && (tiro_origen_j[0] == origen_j[1])){
			vida_tanque[1]--;
			tiro_cont[0] = 0;
			}
		if((tiro_origen_i[1] == origen_i[0]) && (tiro_origen_j[1] == origen_j[0])){
			vida_tanque[0]--;
			tiro_cont[1] = 0;
			}
			
		if(vida_tanque[1] <= 0){
			printf("\nTanque 1 venceu\n");
			break;
			}
			
		if(vida_tanque[0] <= 0){
			printf("\nTanque 2 venceu\n");
			break;
			}
		
		turno ++;
		}	
	}
