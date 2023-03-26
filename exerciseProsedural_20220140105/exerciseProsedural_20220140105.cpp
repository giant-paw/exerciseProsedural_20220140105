#include <iostream>
using namespace std;

int a[1000];
int n;
string nama;


struct student {
	string nama;
	double nilMat, nilFis;
};

double rerata (int i, student mahasiswa[]) {
	return ((mahasiswa[i].nilMat) + (mahasiswa[i].nilFis) / 2);
}

int main() {
	
}


//double rerata(double a, double b) {
//	return (a + b) / 2;
//}
//
//
//string status(double rata, double nil) {
//	if (rata >= 70 || nil > 80) {
//		return "Diterima";
//	}
//	else {
//		return "Ditolak";
//	}
//
//}