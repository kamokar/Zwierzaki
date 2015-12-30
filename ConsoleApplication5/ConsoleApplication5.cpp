#include <iostream>
using namespace std;

class zwierze {
public:
	virtual void glos() {
		cout << "ZWIERZE daje glos" << endl;
	}
	zwierze() {
		cout << "KONST zwierze" << endl;
	};
	~zwierze() {
		cout << "DEST zwierze" << endl;
	};
};

class pies : public zwierze {
public:
	void glos() {
		cout << "PIES daje glos" << endl;
	}	pies() {
		cout << "KONST pies" << endl;
	};
	~pies() {
		cout << "DEST pies" << endl;
	};
};

class kot : public zwierze {
public:
	void glos() {
		cout << "KOT daje glos" << endl;
	}	kot() {
		cout << "KONST kot" << endl;
	};
	~kot() {
		cout << "DEST kot" << endl;
	};
};

void glosik(zwierze *k) {
	k->glos();
};


int main()
{
	{

		pies *pimpek = new pies;
		kot *punia = new kot;

		zwierze *zwierzak = new zwierze;
		glosik(zwierzak);
		delete zwierzak;

		zwierzak = punia;
		glosik(zwierzak);
		delete punia;

		zwierzak = pimpek;
		glosik(zwierzak);
		delete pimpek;




	}



















	system("pause");
	return(0);
}

