/*
 * mandamu.c
 *
 *  Created on: 2017/03/15
 *      Author: kjtbw
 */



#include "mandamu.h"

int PLAYER_NUMBER=0;

int main(void){
	char buf[STR_MAX];
	int checker=0;

	initialize();

	printf("Let's start dungeon of mandamu!\n");

	do{
 		printf("how many players are there?(2,3,4) \n");
 		/*eclipseには必要，コマンドプロンプトなら不要*/
 		/* printf後の標準入力には，fflushでバッファをからにする必要あり*/
 		fflush(0);
 		fgets(buf, sizeof(buf)/sizeof(char),stdin);
 		if(atoi(buf) < 2 || 4 < atoi(buf))checker = print_error(PNII);
 		else checker =1;
	}while(checker < 1);
	PLAYER_NUMBER=atoi(buf);

	printf("%d\n",MONSTER[0].atk);
	printf("%d\n",WEAPON[0].name);
	memset(buf,0,STR_MAX);
	get_str(buf, MONSTER[7].name);
	printf("%s\n",buf);
}





void initialize(){
	PLAYER_NUMBER=0;

}



int print_error(int n){
	switch(n){
		case PNII:
			printf("player numer is invalid. please input again.\n");
			break;

		default: ;
		}
	return -1;
}
