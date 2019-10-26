#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "dolphin.h"

int main(int argc, char* argv[]) {

	int _permit_root = geteuid();	//root権限あれば0になるやつ
	int _return = 0;		//エラーコード


//	install(argv[2]);


	if (!(argv[1])) {
		printf("COULDN'T FIND OPTION!!\n");
		_return = 3;
	} else if (_permit_root) {
		printf("You need to run dolphin in ROOT (or use sudo).\n");
		_return = 2;
	}

	if (_return) {
		printf("\nERROR %i\n\n",_return);
		return _return;
	}

	return 0;
}
