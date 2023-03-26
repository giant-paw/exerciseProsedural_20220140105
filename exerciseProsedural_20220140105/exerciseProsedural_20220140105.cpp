#include <iostream>
using namespace std;

struct student {
	string nama, status;
	double nilMat, nilFis;
};

double rerata (int i,student mahasiswa[]) {
	return ((mahasiswa[i].nilMat) + (mahasiswa[i].nilFis) / 2);
}

string status1(student mahasiswa[], double rata, int nil) {
	if (rata >= 70 || nil > 80) {
		return "Diterima";
	}
	else {
		return "Ditolak";
	}
}

int main() {
	const int jumlah_mahasiswa = 5;
	student mahasiswa[jumlah_mahasiswa];
	int i;
	double status;


	//mengulang data mahasiswa yang akan dihitung
	i = 0;
	do {
		cout << "=====================================" << endl;
		cout << "\tDATA MAHASISWA KE\t " << i + 1 << endl;
		cout << "=====================================" << endl;

        cout << "Masukkan NAMA siswa ke-" << i + 1 << endl;
        cin >> mahasiswa[i].nama;

        cout << "Masukkan NILAI MATEMATIKA dari " << mahasiswa[i].nama << ": ";
        cin >> mahasiswa[i].nilMat;
        cout << endl;

        cout << "Masukkan NILAI FISIKA dari " << mahasiswa[i].nama << ": ";
        cin >> mahasiswa[i].nilFis;
        cout << endl;

		cout << "-------------------------------------------------------------------------------" << endl;
		cout << "NAMA" << "\t" << "NILAI MAT" << "\t" << "NILAI FISIKA" << "\t" << "STATUS" << endl;
		cout << "-------------------------------------------------------------------------------" << endl;

		/*mahasiswa[i].status = status1();*/

		cout << mahasiswa[i].nama << "\t" << mahasiswa[i].nilMat << "\t" << mahasiswa[i].nilFis << "\t" << mahasiswa[i].status << "\t";

			/*if (mahasiswa[i].status || mahasiswa[i].nilMat > 80) {
				return "Diterima";
			}
			else {
				return "Ditolak";
			}*/

		cout << endl;
		i = i + 1;
	}

	while (i < jumlah_mahasiswa);
}

