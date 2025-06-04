#pragma once
using std::string;

enum Lang {
	ENGLISH_EN,
	TURKISH_TR
};
extern Lang language;

struct Dialogs {
	const char** menu;
	const char** calc_xp;
	const char** calc_coin;
	const char** coin_howto;
	void (*about)();
	void (*language)();
	void (*updateLog)();
	void (*log_v101)();
	void (*log_v102)();
	void (*log_v1021)();
	void (*log_v1022)();
	void (*log_v103)();
	void (*log_v104)();
	void (*log_v1041)();
	void (*log_v1042)();
	void (*log_v1043)();
	const char** extras;
};

extern Dialogs get_dialogs(Lang lang);
extern Dialogs dialogs;

extern void cin_error(string& defective_input);
extern bool isnumber(string param_input);

extern void xp_calculator(long long seviye, long long seviye2, long long xp, long long xp2, char method);

extern bool coin_value(string& times);
extern void localization(int country_code);