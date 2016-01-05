#include <iostream>
using namespace std;

class zwierze {
public:
	int x = 11;
	//virtual void glos() = 0;
	virtual void glos() {
		cout << "ZWIERZE daje glos: " << x << endl;
	};
	zwierze() {
		cout << "KONST zwierze" << endl;
	};
	virtual ~zwierze() {
		cout << "DES zwierze" << endl;
	};
};

class pies : public zwierze {
public:
	int x = 22;
	void glos() {
		cout << "PIES daje glos: " << x << endl;
	};
	pies() {
		cout << "KONST pies" << endl;
	};
	~pies() {
		cout << "DES pies" << endl;
	};
};

class kot : public zwierze {
public:
	void glos() {
		cout << "KOT daje glos: " << x << endl;
	};
	kot() {
		cout << "KONST kot" << endl;
	};
	~kot() {
		cout << "DES kot" << endl;
	};
};

void glosik(zwierze *k) {
	k->glos();
};


int main()
{
		pies *pimpek = new pies;
		kot *punia = new kot;
		
		zwierze *zwierzak = new zwierze;
		glosik(zwierzak);
		cout << "Delete zwierzak" << endl; 
		delete zwierzak;

		zwierzak = pimpek;
		glosik(zwierzak);
		cout << "Delete pimpek" << endl; 
		delete zwierzak;

		zwierzak = punia;
		glosik(zwierzak);
		cout << "Delete punia" << endl; 
		delete zwierzak;


















	system("pause");
	return(0);
}

