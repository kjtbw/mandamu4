/*
 * mandamu_data.c
 *
 *  Created on: 2017/03/15
 *      Author: kjtbw
 */



#include "mandamu.h"



struct monster MONSTER[MONSTER_MAX] ={
	 {DRAGON, 9, {DRAGON_LANCE,0,0}, DECK},
	 {DEMON,7,{0,0,0},DECK},
	 {LICH,6,{HOLY_GRAIL,0,0},DECK},
	 {GOLEM,5,{0,0,0},DECK},
	 {GOLEM,5,{0,0,0},DECK},
	 {VAMPIRE,4,{HOLY_GRAIL,0,0},DECK},
	 {VAMPIRE,4,{HOLY_GRAIL,0,0},DECK},
	 {ORC,3,{TORCH,0,0},DECK},
	 {ORC,3,{TORCH,0,0},DECK},
	 {SKELETON,2,{TORCH,HOLY_GRAIL,0},DECK},
	 {SKELETON,2,{TORCH,HOLY_GRAIL,0},DECK},
	 {GOBLIN,1,{TORCH,0,0},DECK},
	 {GOBLIN,1,{TORCH,0,0},DECK},

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
