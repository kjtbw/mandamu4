/*
 * mandamu_func.c
 *
 *  Created on: 2017/03/15
 *      Author: kjtbw
 */
#include "mandamu.h"


void initialize(){
	initialize_data();
	char buf[STR_MAX];
	int checker=0;

	printf("Let's start dungeon of mandamu!\n\n");

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

		int i;
		for(i=0;i<PLAYER_NUMBER;i++){
			PLAYER[i].score=0;
			PLAYER[i].status=ACTIVE;
		}

//		/*for debug*/
//		printf("%d,%d,%d,%d\n",PLAYER[0].status,
//				PLAYER[1].status,
//				PLAYER[2].status,
//				PLAYER[3].status);

		printf("OK. Let's start game!\n");
	}




void initialize_data(){
	PLAYER_NUMBER=0;
	int i;
	for(i=0;i<MONSTER_MAX;i++){MONSTER[i].place=DECK;}
	for(i=0;i<WEAPON_MAX;i++){WEAPON[i].place=EQUIPPED;}

}


void print_turn_init(){
	printf("player %d turn start!\n",NOW_PLAYER);
	print_some_data();



}


void print_some_data(){



}
