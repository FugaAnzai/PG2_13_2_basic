#include <stdio.h>
#include "Pokemon.h"

int main() {

	int i = 0;

	Pokemon pokemon1("���O���[�W");
	printf("1�̖ځF%s\n", pokemon1.name);
	Pokemon pokemon2(pokemon1);
	printf("2�̖ځF%s\n", pokemon2.name);

	while (i != 1) {
		printf("�R���\�[���A�v���P�[�V�������I������ꍇ�͐�����1����͂���Enter�L�[�������Ă�������");
		scanf_s("%d", &i);
	}
	return 0;
}