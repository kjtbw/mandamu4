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

#define PNII -1
#define STR_MAX 256
#define MONSTER_MAX 13
#define WEAPON_MAX 6

#define DRAGON 11


#define DRAGON_LANCE 21


#define DECK 30



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


extern struct monster MONSTER[MONSTER_MAX];
extern struct  weapon WEAPON[WEAPON_MAX] ;


void initialize();
int print_error(int n);

#endif /* MANDAMU_H_ */
