/*
 * mandamu_data.c
 *
 *  Created on: 2017/03/15
 *      Author: kjtbw
 */



#include "mandamu.h"



struct monster MONSTER[MONSTER_MAX] ={
	 {DRAGON, 9, DRAGON_LANCE, DECK},
	 {DEMON,7,EMPTY,DECK},
	 {LICH,6,HOLY_GRAIL,DECK},
	 {GOLEM,5,EMPTY,DECK},
	 {GOLEM,5,EMPTY,DECK},
	 {VAMPIRE,4,HOLY_GRAIL,DECK},
	 {VAMPIRE,4,HOLY_GRAIL,DECK},
	 {ORC,3,TORCH,DECK},
	 {ORC,3,TORCH,DECK},
	 {SKELETON,2,EMPTY,DECK},
	 {SKELETON,2,EMPTY,DECK},
	 {GOBLIN,1,TORCH,DECK},
	 {GOBLIN,1,TORCH,DECK},

};

struct  weapon WEAPON[WEAPON_MAX] = {
	{DRAGON_LANCE,EQUIPPED},
	{VORPAL_SWORD,EQUIPPED},
	{TORCH,EQUIPPED},
	{HOLY_GRAIL,EQUIPPED},
	{KNIGHT_SHIELD,EQUIPPED},
	{PLATE_ARMOR,EQUIPPED},
};


struct player PLAYER[PLAYER_MAX]= {
		{},
};
