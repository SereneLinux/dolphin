#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {

	int _permit_root = geteuid();	//root権限あれば0になるやつ

	int _return = 0;



	if (!(argv[1])) {
		printf("COULDN'T FIND OPTION!!\n");
		_return = 1;
	} if (_permit_root) {
		printf("You need to run dolphin in ROOT (or use sudo).\n");
		_return = 1;
	}

	if (_return) {
		printf("ERROR\n");
		return _return;
	}

	printf("success dolphin !");
	return 0;
}
