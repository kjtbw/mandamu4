/*
 * mandamu.c
 *
 *  Created on: 2017/03/15
 *      Author: kjtbw
 */

#include "mandamu.h"
int PLAYER_NUMBER=0;
int ORDER[13]={};
int COUNT=0;
int END_FLAG=0;
int NOW_PLAYER;



int main(void){
	initialize();

	while(!END_FLAG){
		/*eclipse実行だときれいにならない,コマンドプロンプトがよい*/
		system("cls");
		NOW_PLAYER=COUNT%4 +1;
		print_turn_init();



		/*for debug*/
		COUNT++;
		if(COUNT > 7)END_FLAG=1;

	}

}





int print_error(int n){
	switch(n){
		case PNII:
			printf("player number is invalid. please input again.\n");
			break;

		default: ;
		}
	return -1;
}
