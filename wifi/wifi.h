#ifndef H95E613B3_B293_451C_8DA4_EE2CFFD3CC1C
#define H95E613B3_B293_451C_8DA4_EE2CFFD3CC1C

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WifiMsg{
	int command, x, y, action;
}WifiMsg;

void send_msg(const WifiMsg* msg);
void send_json(const char* json);

#ifdef __cplusplus
}
#endif

#endif
