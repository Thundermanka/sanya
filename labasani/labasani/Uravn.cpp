#define _CRT_SECURE_NO_WARNINGS
#include "Uravn.h"
#include <stdio.h>
#include <math.h>
Uravn::Uravn() {
	printf("������� ����������� ��������� A, B � C");
	scanf("%d %d %d", &a, &b, &c);
}
void Uravn::getRoots() {
	D = b * b - 4 * a * c;
	if (D > 0) {
		printf("2 �����\n");
		int x1 = (-b + sqrt(D)) / (2 * a);
		int x2 = (-b - sqrt(D)) / (2 * a);
		r.x1 = x1;
		r.x2 = x2;
	}
	if (D == 0) {
		printf("1 ������ ��� ��� ����� ������������ ����� 0\n");
		int x1 = (-b) / (2 * a);
		r.x1 = x1;
		r.x2 = x1;
	}
	if (D < 0) printf("������ ���\n");
}
void Uravn :: operator>>(Uravn ur) {
	if (D > 0) {
		if (r.x1 < r.x2) printf("%d �������\n", r.x1);
		if (r.x2 < r.x1) printf("%d �������\n", r.x2);
	}
	else printf("������ ������������ ��� ���������\n");
}
