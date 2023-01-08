#pragma once
struct roots {
	int x1;
	int x2;
};
class Uravn
{
private:
	int a, b, c, D;
	roots r;
public:
	Uravn();
	void getRoots();
	void operator>>(Uravn);
};


