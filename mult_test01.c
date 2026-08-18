
#include <stdio.h>


	int *Porigen_i = NULL;
	int *Porigen_j = NULL;
	
	int *Ptorre_modo = NULL;
	int *Ptorre_origen_i = NULL;
	int *Ptorre_origen_j = NULL;
	char *Ptorre_canhao = NULL;
	char *Ptank_bandeira = NULL;
	
	int *Parea = NULL;
	
	int *Ptiro_origen_i = NULL;
	int *Ptiro_origen_j = NULL;
	int *Ptiro_modo = NULL;
	int *Ptiro_cont = NULL;
	
	int *Pvida_tanque_p0 = NULL;
	int *Pvida_tanque_p1 = NULL;

void menu_iniciar(){
	int test;
	printf("               ___                           _  _   \n");
    printf(" __________   / _ \\             __      __  | |/ /  \n");
    printf(" |__    __|  / /_\\ _________   |   \\   / /  |   /   \n");
    printf("    |  |    / ___ /         \\  | |\\ \\_/ /   |   \\   \n");
    printf("    |__|   /_/   |\\          | |_| \\___/    |_|\\_\\  \n");
    printf("                 | \\        /|                      \n");
    printf("     ____________| --------- |________              \n");
    printf("    /\\           | |/____/ | |  /   __\\_            \n");
    printf("   |  \\          \\ |/    \\ | /  |\\ /____\\           \n");
    printf("   |\\  \\   _____  \\||    |/|/   ||\\|____|           \n");
    printf("   |\\  \\   \\    \\   \\____/      ||   |   \\          \n");
    printf("   \\| \\  \\  \\____\\              \\|___|    \\         \n");
    printf("    \\ |\\  \\                                \\        \n");
    printf("     \\| \\  \\___________---------____________\\       \n");
    printf("      \\ |\\  \\          |       |            |       \n");
    printf("       \\| \\ |          ---------            |       \n");
    printf("        \\ |\\|_______________________________|       \n");
    printf("         \\| |       |             \\| |     |        \n");
    printf("          \\_/_______/              \\_|_____/\n");
    printf("Press any kay to start");
    scanf(" %d",test);
	}
	
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
					printf("%c", *Ptank_bandeira);
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
					printf(" ");
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
	
	void constroi_hud(int y, int x){
		int area_j = *Parea * 2;
		
		if((y == 1 && x == area_j + 2)||(y == 1 && x == area_j + 7)){
			printf("P");
			}
		else if((y == 1 && x == area_j + 4)||(y == 1 && x == area_j + 9)){
			printf(":");
			}
			
		else if(y == 1 && x == area_j + 3){
			printf("0");
			}
		else if(y == 1 && x == area_j + 8){
			printf("@");
			}
			
		else if(y == 2 && x == area_j + 3){
			if (*Pvida_tanque_p0>0){
				printf("o");
				}
			else{
				printf("x");
				}
			}
		else if(y == 3 && x == area_j + 3){
			if (*Pvida_tanque_p0>1){
				printf("o");
				}
			else{
				printf("x");
				}
			}
		else if(y == 4 && x == area_j + 3){
			if (*Pvida_tanque_p0>2){
				printf("o");
				}
			else{
				printf("x");
				}
			}
		else if(y == 5 && x == area_j + 3){
			if (*Pvida_tanque_p0>3){
				printf("o");
				}
			else{
				printf("x");
				}
			}
		else if(y == 6 && x == area_j + 3){
			if (*Pvida_tanque_p0>4){
				printf("o");
				}
			else{
				printf("x");
				}
			}
			
		else if(y == 2 && x == area_j + 8){
			if (*Pvida_tanque_p1>0){
				printf("@");
				}
			else{
				printf("x");
				}
			}
		else if(y == 3 && x == area_j + 8){
			if (*Pvida_tanque_p1>1){
				printf("@");
				}
			else{
				printf("x");
				}
			}
		else if(y == 4 && x == area_j + 8){
			if (*Pvida_tanque_p1>2){
				printf("@");
				}
			else{
				printf("x");
				}
			}
		else if(y == 5 && x == area_j + 8){
			if (*Pvida_tanque_p1>3){
				printf("@");
				}
			else{
				printf("x");
				}
			}
		else if(y == 6 && x == area_j + 8){
			if (*Pvida_tanque_p1>4){
				printf("@");
				}
			else{
				printf("x");
				}
			}
		
		else if(y == 10 && x == area_j + 2){			
			printf("W");
			}
		else if(y == 10 && x == area_j + 3){			
			printf(":");
			}
		else if(y == 10 && x == area_j + 8){			
			printf("^");
			}
			
		else if(y == 11 && x == area_j + 2){			
			printf("s");
			}
		else if(y == 11 && x == area_j + 3){			
			printf(":");
			}
		else if(y == 11 && x == area_j + 8){			
			printf("v");
			}
			
		else if(y == 12 && x == area_j + 2){			
			printf("a");
			}
		else if(y == 12 && x == area_j + 3){			
			printf(":");
			}
		else if(y == 12 && x == area_j + 8){			
			printf("<");
			}
			
		else if(y == 13 && x == area_j + 2){			
			printf("d");
			}
		else if(y == 13 && x == area_j + 3){			
			printf(":");
			}
		else if(y == 13 && x == area_j + 8){			
			printf(">");
			}
			
		else if(y == 14 && x == area_j + 2){			
			printf("e");
			}
		else if(y == 14 && x == area_j + 3){			
			printf(":");
			}
			else if(y == 14 && x == area_j + 5){			
			printf("S");
			}
			else if(y == 14 && x == area_j + 6){			
			printf("a");
			}
			else if(y == 14 && x == area_j + 7){			
			printf("i");
			}
			else if(y == 14 && x == area_j + 8){			
			printf("r");
			}
				
		else if(((y > 0 && y  <= 7) && (x > area_j + 1 && x <= area_j + 9))||((y > 9 && y  <= 14) && (x > area_j + 1 && x <= area_j + 9))){
			printf(" ");
			}
			
		else{
			printf(".");
		}
	}
	
int main(){
	int area, origen_i[2], origen_j[2], torre_origem_i[2], torre_origem_j[2], torre_modo[2], tiro_modo[2], tiro_origen_i[2],tiro_origen_j[2],tiro_cont[2], turno = 0, vida_tanque[2] ;
	char resposta_2,torre_canhao[2], tank_bandeira[2];
	
	vida_tanque[0] = 5;
	torre_modo[0] = 0;
	tiro_modo[0] = 0;
	tiro_cont[0] = 0;
	tank_bandeira[0] = 'O';
	
	area = 19;
	origen_i[0] = 2;
	origen_j[0] = 2;
	
	vida_tanque[1] = 5;
	torre_modo[1] = 4;
	tiro_modo[1] = 4;
	tiro_cont[1] = 0;
	tank_bandeira[1] = '@';
	
	origen_i[1] = area - 1;
	origen_j[1] = area*2 - 1;
	
	Pvida_tanque_p0 = &vida_tanque[0];
	Pvida_tanque_p1 = &vida_tanque[1];
	
	menu_iniciar();
	
	while(1){
		if(turno%2 == 0){
			Porigen_i = &origen_i[0];
			Porigen_j = &origen_j[0];
	
			Ptorre_modo = &torre_modo[0];
			Ptorre_origen_i = &torre_origem_i[0];
			Ptorre_origen_j = &torre_origem_j[0];
			Ptorre_canhao = &torre_canhao[0];
			Ptank_bandeira = &tank_bandeira[0];
	
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
			Ptank_bandeira = &tank_bandeira[1];
	
			Ptiro_origen_i = &tiro_origen_i[1];
			Ptiro_origen_j = &tiro_origen_j[1];
			Ptiro_modo = &tiro_modo[1];
			Ptiro_cont = &tiro_cont[1];
			}
	
		Parea = &area;
		altera_torre_modo();
		
		for(int i = -1; i <= area+2; i++){
			for(int j = -1; j <= area*2+10; j++){
				
				if ((i>0 && j<=area*2)&&(j>0 && i <=area)){
					constroi(i, j);
				}
				else{
					constroi_hud(i, j);
					}
				
			}
		
			printf("\n");
		}
		
		printf("Torre: j(anti-horário) l(horário) k(atirar): ");
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
