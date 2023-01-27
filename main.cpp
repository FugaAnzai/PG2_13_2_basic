#include <stdio.h>
#include "Pokemon.h"

int main() {

	int i = 0;

	Pokemon pokemon1("ラグラージ");
	printf("1体目：%s\n", pokemon1.name);
	Pokemon pokemon2(pokemon1);
	printf("2体目：%s\n", pokemon2.name);

	while (i != 1) {
		printf("コンソールアプリケーションを終了する場合は数字の1を入力してEnterキーを押してください");
		scanf_s("%d", &i);
	}
	return 0;
}