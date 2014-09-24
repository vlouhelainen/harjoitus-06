/*		Valtteri Louhelainen

Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa olevan raham‰‰r‰n
ja lihapiirakan hinnan.

Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka.
Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa.
Muuten ohjelma kehottaa k‰ytt‰j‰‰ paastoamaan.

K‰yt‰ vain kahta muuttujaa. ‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi
ostaa lihapiirakkaa.*/

#include <iostream>
using namespace std;
void main()
{
	int raha;
	int hinta;
	cout << "Paljonko lompakossa on rahaa? ";
	cin >> raha;
	cout << "Kuinka paljon lihapiirakka maksaa? ";
	cin >> hinta;
	if (hinta == 0)
		cout << "Jee, ilmaisia lihapiirakoita!";
	else if (raha < hinta)
		cout << "Nyt ei lihapiirakkaan rahat riit\x84, joten paastoamaan vain siit\x84.\n";
	else if (raha == hinta)
		cout << "Lihapiirakkaan riitt\x84v\x84t rahat, eik‰ rahaa j‰‰ yli.\n";
	else if (raha > hinta && raha / hinta > 1)
		if (raha - hinta*floor(raha / hinta) == 0)
			cout << "Lompakon rahat riitt\x84v\x84t tasan " << raha / hinta << ":n lihapiirakkaan.\n"
			<< "Jos haluat vain yhden lihapiirakan, rahaa j\x84isi yli " << raha - hinta << ".\n";
		else
			cout << "Rahat riitt\x84v\x84t " << floor(raha / hinta) << ":n lihapiirakkaan, ja rahaa j\x84\x84 yli " << raha - hinta*floor(raha / hinta) << ".\n"
			<< "Jos haluat vain yhden lihapiirakan, rahaa j\x84isi yli " << raha - hinta << ".\n";
	else if (raha > hinta)
		cout << "Lihapiirakan voi ostaa ja rahaa j\x84i yli jopa "<<raha-hinta<<".\n";
}