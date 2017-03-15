/*
 * mandamu.h
 *
 *  Created on: 2017/03/15
 *      Author: kjtbw
 */


#ifndef MANDAMU_H_
#define MANDAMU_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PNII -1

#define STR_MAX 256
#define MONSTER_MAX 13
#define WEAPON_MAX 6
#define PLAYER_MAX 4

#define DRAGON 11
#define DEMON 12
#define LICH 13
#define GOLEM 14
#define VAMPIRE 15
#define ORC 16
#define SKELETON 17
#define GOBLIN 18


#define DRAGON_LANCE 21
#define VORPAL_SWORD 22
#define TORCH 23
#define HOLY_GRAIL 24
#define KNIGHT_SHIELD 25
#define PLATE_ARMOR 26



#define DECK 30
#define DUNGEON 31
#define HAND 32
#define EXCLUDE 33
#define EMPTY 34






#define EQUIPPED 40

extern int PLAYER_NUMBER;

 struct monster{
	int name;
	int atk;
	int weak_weapon;
	int place;
	};

struct weapon{
	int name;
	int place;
	};

struct player{
	int score;
	};


extern struct monster MONSTER[MONSTER_MAX];
extern struct  weapon WEAPON[WEAPON_MAX] ;
extern struct player PLAYER[PLAYER_MAX];

void initialize();
int print_error(int n);
void get_str(char buf[], int type);


#endif /* MANDAMU_H_ */
