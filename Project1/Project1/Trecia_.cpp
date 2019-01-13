#include <iostream>
#include <string>

using namespace std;

	int amzius;
	int dienos;
	int zmoniuSk;
	int zvaigzd;
	int nr;
	int ats;
	string vardas;
	string pavarde;
	string adr;
	string eadr;
	int taip;



void anketa(){
while (amzius < 18){
	cout << "Prasome uzpildyti viesbucio rezervacijos anketa, kad paskaiciuotumete apsistojimo kaina" << endl;
	cout << "Iveskite savo varda" << endl;
	cin >> vardas;
	cout << "Iveskite savo pavarde" << endl;
	cin >> pavarde;
	cout << "Iveskite savo telefono numeri" << endl;
	cin >> nr;
	cout << "Iveskite savo adresa" << endl;
	cin >> adr;
	cout << "Iveskite savo elektroninio pasto adresa" << endl;
	cin >> eadr;
	cout << "Iveskite savo amziu (min 18)" << endl;
	cin >> amzius;
	cout << "Iveskite kiek dienu norite apsistoti viesbutyje" << endl;
	cin >> dienos;
	cout << "Kiek zmoniu apsistos kambaryje?" << endl;
	cin >> zmoniuSk;
	cout << "Keliu zvaigzduciu kambaryje norite apsistoti? Iveskite skaiciu nuo 1 iki 5" << endl;
	cin >> zvaigzd;
	
		}
}
void kaina (int dienos, int zmoniuSk, int zvaigzd){
	int d;
	int e = 30;
	d = (dienos * e) * zmoniuSk * zvaigzd;
	cout << "Jusu apsistojimo kaina yra:" << d << endl;
}

void atsakymas() {
	cout << "Jei norite testi spauskite 1." << endl;
	cin >> ats;
	
	if (ats == 1){
		cout << "Patikrinkite savo duomenis:" << endl;
		cout << "Jusu vardas ir pavarde:" << vardas << pavarde << endl;
		cout << "Jusu amzius:" << amzius << endl;
		cout << "Kiek dienu apsistosite:" << dienos << endl;
		cout << "Zmoniu skaicius:" << zmoniuSk << endl;
		cout << "Kambarys yra " << zvaigzd << " zvaigzduciu" << endl;
		cout << "Kontaktiniai duomenys:" << endl;
		cout << "Jusu adresas yra: " << adr << endl;
		cout << "Jusu elektroninis pastas yra" << eadr << endl;
		cout << "Jusu telefono numeris:" << nr << endl;
		cout << "Jei duomenys teisingi spauskite 1" << endl;
		cin >> taip;
		
		
	}
	else {
		cout << "Dekui, viso gero."<< endl;
	}
}


int main(int argc, char** argv) {
	
	anketa();
	kaina(dienos, zmoniuSk, zvaigzd);
	atsakymas();
	if (taip == 1){
			cout << "Dekui, jusu uzsakymas priimtas." << endl;
		}
		else {
			anketa();
			kaina(dienos, zmoniuSk, zvaigzd);
			atsakymas();
		}

	return 0;
}
