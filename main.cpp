#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {

	//root権限あれば0になる
	int _permit_root = geteuid();

	if (_permit_root) {
		//root権限なかったとき
		printf("You need to run dolphin in ROOT (or use sudo).");
		return 1;
	}

	printf("ROOT!\n");

	return 0;
}
