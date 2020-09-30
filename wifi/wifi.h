#ifndef H95E613B3_B293_451C_8DA4_EE2CFFD3CC1C
#define H95E613B3_B293_451C_8DA4_EE2CFFD3CC1C

#include "mcl/stdc.h"

MCL_STDC_BEGIN

typedef struct WifiMsg{
	int command, x, y, action;
}WifiMsg;

void send_msg(const WifiMsg* msg);
void send_json(const char* json);

MCL_STDC_END

#endif
