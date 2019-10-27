#include <stdio.h>
#include <unistd.h>
#include "dolphin.h"

int main(int argc, char* argv[]) {

	int _permit_root = geteuid();	//root権限あれば0が入るやつ
	int _return = 0;		//エラーコード


	printf("%s",argv[1]);	


	if (_permit_root) {
		printf("You need to run dolphin in ROOT (or use sudo).\n");
		_return = 2;
	}

	if (_return) {
		printf("\nERROR %i\n\n",_return);
		return _return;
	}

	return 0;
}
