#include "Uravn.h"
#include<locale>
int main() {
	setlocale(LC_ALL, "Russian");
	Uravn ur;
	ur.getRoots();
	ur >> ur;
}