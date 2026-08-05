#include <stdio.h>

#define MAP_HEIGHT 45
#define MAP_WIDTH 155

int initializemap();
int gameloop();

int main(){

	initializemap();
	gameloop();

	return 0;
}

int initializemap(){
	int i, j = 0;
	int map[MAP_HEIGHT][MAP_WIDTH];
	int cela1, cela2, celb1, celb2, celc1, celc2, celd1, celd2;
	
	/* printf("Células vivas? \n Formato: [x,y], [x,y], [x,y], [x,y] \n");
	scanf("[%d,%d], [%d,%d], [%d,%d], [%d,%d]", &cela1, &cela2, &celb1, &celb2, &celc1, &celc2, &celd1, &celd2); */
	for(i=0; i<=MAP_HEIGHT - 1; i++){
		for(j=0;j<=MAP_WIDTH - 1;j++){
			map[i][j] = 0;	
		}
	}

	map[20][70] = 1;
	map[20][71] = 1;
	map[20][72] = 1;
	map[21][70] = 1;
	map[21][71] = 1;
	map[21][72] = 1;
	

	for(i=0; i<=MAP_HEIGHT - 1; i++){
		for(j=0;j<=MAP_WIDTH - 1;j++){

		printf("%d", map[i][j]);

		}
		printf("\n");
	}
		
	return 0;
}

int gameloop(){

/* Arranjar forma de mapa ser o mesmo que é inicializado, colocado as condições iniciais, e passado para o gameloop*/

}
