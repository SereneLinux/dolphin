#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "dolphin.h"

int main(int argc, char* argv[]) {

	int _permit_root = geteuid();	//root権限あれば0になるやつ
	int _return = 0;		//戻り値を設定


	if (_permit_root) {
		printf("You need to run dolphin in ROOT (or use sudo).\n");
		_return = 2;
	} else if (!(argv[1])) {
		printf("COULDN'T FIND OPTION!!\n");
		_return = 3;
	}

	if (_return) {
		printf("ERROR\n");
		return _return;
	}


	_action(argv[1]);

	printf("success dolphin %s !",argv[1]);
	return 0;
}

int _action(char* hoge) {
	printf("get value 1 is %s\n",hoge);
	return 0;
}
