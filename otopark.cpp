#include <iostream.h>

using namespace std;

class Otopark{

	private:
	int saat;
	int secim;
	int aracCinsi;
	int toplamUcret;
	void hesapla();
	public:
	void menu();

};

void Otopark :: hesapla()
{
	cout << " Otoparkimizi kac saat kullanacaksiniz : "; cin >> saat;

	if (aracCinsi == 1)
	{
	toplamUcret = 20*saat;
	}
	if (aracCinsi == 2)
	{
	toplamUcret = 30*saat;
	}
	if (aracCinsi == 3)
	{
	toplamUcret = 40*saat;
	}

	system("cls");
	cout << "Toplam ucret : "<< toplamUcret << " TL"<< endl<<endl;

	system("pause");
}
void Otopark ::menu()
{

	while (1)
	{
		system("cls");

		cout << " ***** OTOPARK UYGULAMASI *****"<< endl << endl;
		cout << " Arac cinsleri "<< endl;
		cout << " [1] Taksi " << endl;      // taksi saat ücreti 20
		cout << " [2] Minibus " << endl;        // minibüs saat ücreti 30
		cout << " [3] Ticari Arac " << endl;     // ticari arac saati 40
		cout << " [0] CIKIS " << endl;
		cout << " Tercihiniz ==> "; cin >> secim;

		if (secim == 0)
		{
			cout << " Cikis yapiliyor...";
			break;
		}
		else if (secim > 0 && secim < 4)
			 {
				aracCinsi = secim;
				hesapla();
			 }
	}

}

int main()
{

 Otopark nes;
 nes.menu();

}
