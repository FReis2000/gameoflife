#include <stdio.h>

int main(){

int i, j = 0;
int map[45][155];
int cela1, cela2, celb1, celb2, celc1, celc2, celd1, celd2;
	
printf("Células vivas? \n Formato: [x,y], [x,y], [x,y], [x,y] \n");
scanf("[%d,%d], [%d,%d], [%d,%d], [%d,%d]", &cela1, &cela2, &celb1, &celb2, &celc1, &celc2, &celd1, &celd2);
	for(i=0; i<=44; i++){
	for(j=0;j<=154;j++){
		map[i][j] = 0;	
	}
}

map[cela1][cela2] = 1;
map[celb1][celb2] = 1;
map[celc1][celc2] = 1;
map[celd1][celd2] = 1;


	for(i=0; i<=44; i++){
		for(j=0;j<=154;j++){

		printf("%d", map[i][j]);

		}
		printf("\n");
	}
		
	return 0;
}
