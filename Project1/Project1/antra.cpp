#include <iostream>
#include <string>
using namespace std;

/* Ar jau laikas keltis?
Pasirinkite diena nuo 1 iki 7
Jei diena nuo 6 iki 7,
	Neziureti i laika
	Parodyti 'Miegok kiek nori' ir baigti
Jei diena nuo 1 iki 5
Pasirinkite valanda nuo 1 iki 12
Ziureti laikas, jei nuo 1 iki 6, 
	Parodyti 'dar ne laikas keltis' ir tikrinti kas valanda kol bus 7
	Jei laikas nuo 7 iki 8,
	Parodyti 'Laikas keltis' ir baigti
	Jei laikas nuo 9 iki 12,
	Parodyti 'Kelkis! Jau veluoji!' ir baigti
*/
int diena;
int valanda;

void arKeltis (){
	int diena[7] = {1, 2, 3, 4, 5, 6, 7};
	int valanda[24]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
	diena[0]=1;
	diena[1]=2;
	diena[2]=3;
	diena[3]=4;
	diena[4]=5;
	diena[5]=6;
	diena[6]=7;
	valanda[0]=1;
	valanda[1]=2;
	valanda[2]=3;
	valanda[3]=4;
	valanda[4]=5;
	valanda[5]=6;
	valanda[6]=7;
	valanda[7]=8;
	valanda[8]=9;
	valanda[9]=10;
	valanda[10]=11;
	valanda[11]=12;
					
		}	

int main(int argc, char** argv) {

	cout << "Iveskite savaite diena nuo 1 iki 7" << endl;
	cin >> diena;
//	while (diena < 8){
		
		if (diena > 7){
			cout << "Neteisingai ivedete diena, bandykite is naujo." << endl;
			return 0;
		}
		if (diena >= 6) {
			cout << "Miegok kiek  nori!" << endl;
	}
		else if (diena < 6){
			
			cout << "Iveskite valanda nuo 1 iki 12" << endl;
				cin >> valanda;	
					if  (valanda < 7){
						cout << "Dar ne laikas keltis, bandyk veliau." << endl;
				}
					if (valanda == 7){
						cout << "Laikas keltis." << endl;
				}
					if (valanda == 8){
						cout << "Laikas keltis" << endl;
					}
					if (valanda > 8){
					cout << "Kelkis! Jau veluoji!" << endl;
				}
			}
	//	}
		
	return 0;
}



/* Galvojame, kad zmogus keliasi 7-8 valandomis
Dirba nuo 9 iki 19 valandos
Klausiama ar keltis iki 12 valandos
Savaitgaliais zmogus keliasi kada nori*/
