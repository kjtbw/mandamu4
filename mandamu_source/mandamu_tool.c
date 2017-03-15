/*
 * mandamu_tool.c
 *
 *  Created on: 2017/03/15
 *      Author: kjtbw
 */
#include "mandamu.h"

void get_str(char buf[], int type){

switch(type){
case DRAGON:
	snprintf(buf, STR_MAX, "dragon");
	break;

case DEMON:
	snprintf(buf, STR_MAX, "demon");
	break;
case LICH:
	snprintf(buf, STR_MAX, "lich");
	break;
case GOLEM:
	snprintf(buf, STR_MAX, "golem");
	break;
case VAMPIRE:
	snprintf(buf, STR_MAX, "vampire");
	break;
case ORC:
	snprintf(buf, STR_MAX, "orc");
	break;
case SKELETON:
	snprintf(buf, STR_MAX, "skeleton");
	break;
case GOBLIN:
	snprintf(buf, STR_MAX, "goblin");
	break;

case DRAGON_LANCE:
	snprintf(buf, STR_MAX, "dragon_lance");
	break;
case TORCH:
	snprintf(buf, STR_MAX, "torch");
	break;
case HOLY_GRAIL:
	snprintf(buf, STR_MAX, "holy_grail");
	break;
case VORPAL_SWORD:
	snprintf(buf, STR_MAX, "vorpal_sword");
	break;
case KNIGHT_SHIELD:
	snprintf(buf, STR_MAX, "knight_shield");
	break;
case PLATE_ARMOR:
	snprintf(buf, STR_MAX, "plate_armor");
	break;


default:;
}



}
