#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

void coutndigits(int x, int n) {
	//Mencout int x menjadi n digit
	//I.S. : digit x < n
	int xold = x;
	int nzero = n;
	if (x == 0) {
		nzero -= 1;
	} else {
		while (x != 0) {
			nzero --;
			x /= 10;
		}
	}

	for (int i = 0; i < nzero; i++) {
		cout << 0;
	}
	cout << xold << endl;
}

void nimmahasiswa_pt () {
	for (int thn = 14; thn <= 16; thn++) {
		for (int nimif = 1; nimif <= 50; nimif++) {
			cout << 135 << thn;
			coutndigits(nimif, 3);
		}
		for (int nimel = 1; nimel <= 50; nimel++) {
			cout << 132 << thn;
			coutndigits(nimel, 3);			
		}
		for (int nimar = 1; nimar <= 50; nimar++) {
			cout << 152 << thn;
			coutndigits(nimar, 3);	
		}
		for (int nimsi = 1; nimsi <= 50; nimsi++) {
			cout << 150 << thn;
			coutndigits(nimsi, 3);
		}
	}
}

void kodematkul () {
	for (int i = 0; i < 56; i++) {
		cout << "IF" << i / 14 + 1 << (i / 7) % 2 + 1;
		if (((i + 1) / 10) == 0) cout << 0;
		cout << i + 1 << endl;
	}
	for (int i = 56; i < 70; i++) {
		cout << "IF" << 5 << 0;
		if (((i + 1) / 10) == 0) cout << 0;
		cout << i + 1 << endl;
	}

	for (int i = 0; i < 56; i++) {
		cout << "EL" << i / 14 + 1 << (i / 7) % 2 + 1;
		if (((i + 1) / 10) == 0) cout << 0;
		cout << i + 1 << endl;
	}
	for (int i = 56; i < 69; i++) {
		cout << "EL" << 5 << 0;
		if (((i + 1) / 10) == 0) cout << 0;
		cout << i + 1 << endl;
	}

	for (int i = 0; i < 56; i++) {
		cout << "AR" << i / 14 + 1 << (i / 7) % 2 + 1;
		if (((i + 1) / 10) == 0) cout << 0;
		cout << i + 1 << endl;
	}
	for (int i = 56; i < 70; i++) {
		cout << "AR" << 5 << 0;
		if (((i + 1) / 10) == 0) cout << 0;
		cout << i + 1 << endl;
	}

	for (int i = 0; i < 56; i++) {
		cout << "SI" << i / 14 + 1 << (i / 7) % 2 + 1;
		if (((i + 1) / 10) == 0) cout << 0;
		cout << i + 1 << endl;
	}
	for (int i = 56; i < 70; i++) {
		cout << "SI" << 5 << 0;
		if (((i + 1) / 10) == 0) cout << 0;
		cout << i + 1 << endl;
	}
}

void homephonenumber (int n) {
	for (int mhs = 1; mhs <= n; mhs++) {
		cout << 0;
		for (int i = 2; i <= 3; i++) {
			cout << rand() % 10;
		}
		//cout << "-";
		for (int i = 1; i <= 7; i++) {
			cout << rand() % 10;
		}
		cout << endl;
	}
}

void cellphonenumber (int n) {
	for (int mhs = 1; mhs <= n; mhs++) {
		cout << "08";
		for (int i = 1; i <= 10; i++) {
			cout << rand() % 10;
		}
		cout << endl;
	}
}

void randnumber (int n, int size, int begin, int end) {
	for (int mhs = 1; mhs <= n; mhs++) {
		for (int i = 1; i <= size; i++) {
			cout << rand() % (end - begin + 1) + begin;
		}
		cout << endl;
	}
}

void rand01 (int n) {
	for (int mhs = 1; mhs <= n; mhs++) {
		cout << rand() % 2;
		cout << endl;
	}
}


void sks () {
	int nfak = 4;
	int nsmt = 8;
	int nmatkul = 7;
	int nmatkulpilihan = 14;

	int sks[nfak][nsmt][nmatkul];

	for (int fak = 0; fak < nfak; fak++) {
		for (int smt = 0; smt < nsmt; smt++) {
			for (int matkul = 0; matkul < nmatkul; matkul++) {
				sks[fak][smt][matkul] = 3;
			}
		}
	}

	int nshuffle = 10;

	for (int fak = 0; fak < nfak; fak++) {
		for (int smt = 0; smt < nsmt; smt++) {
			for (int i = 0; i < nshuffle; i++) {
				int sksplus = rand() % nmatkul;
				sks[fak][smt][sksplus]++;
				int sksmin = 0;
				do {
					sksmin = rand() % nmatkul;
				} while (sks[fak][smt][sksmin] <= 2);
				sks[fak][smt][sksmin]--;
			}
		}
	}
	//DEBUG PURPOSE ONLY
	/*for (int fak = 0; fak < nfak; fak++) {
		for (int smt = 0; smt < nsmt; smt++) {
			int jumSksSmt = 0;
			for (int matkul = 0; matkul < nmatkul; matkul++) {
				cout << sks[fak][smt][matkul] << endl;
				jumSksSmt += sks[fak][smt][matkul];
			}
			cout << '<' << jumSksSmt << '>' << endl;
		}
		cout << endl << "==========" << endl << endl;
	}*/
	int cnt = 0;
	for (int fak = 0; fak < nfak; fak++) {
		for (int smt = 0; smt < nsmt; smt++) {
			for (int matkul = 0; matkul < nmatkul; matkul++) {
				cout << sks[fak][smt][matkul] << endl;
				cnt ++;
			}
		}
		if (fak == 2) {
			nmatkulpilihan -= 1;
		}
		for (int matkulpilihan = 0; matkulpilihan < nmatkulpilihan; matkulpilihan++) {
			cout << rand() % 4 + 1 << endl;
			cnt ++;
		}
		if (fak == 2) {
			nmatkulpilihan += 1;
		}
	}
	//cout << "cnt = " << cnt << endl;
}

void randnilai (int n) {
	int nilai;
	char huruf[2];
	float idx;
	int jml = 1;
	for (int i = 1; i <= n; i++){
		nilai =	 rand() % 60 + 41;
		/*jml = 1;
		nilai = rand() % 60 + 41;
		if (nilai >= 80){
			huruf[0] = 'A';
			idx = 4;
		}
		else if (nilai >= 72){
			jml = 2;
			huruf[0] = 'A';
			huruf[1] = 'B';
			idx = 3.5;
		}
		else if (nilai >= 65){
			huruf[0] = 'B';
			idx = 3;
		}
		else if (nilai >= 58){
			jml = 2;
			huruf[0] = 'B';
			huruf[1] = 'C';
			idx = 2.5;
		}
		else if (nilai >= 50){
			huruf[0] = 'C';
			idx = 2;
		}
		else if (nilai >= 40){
			huruf[0] = 'D';
			idx = 1;
		}
		else {
			huruf[0] = 'E';
			idx = 0;
		}
		//cout << jml << endl;

		if (jml == 1){
			cout << nilai << ";" << huruf[0] << ";" << idx << endl;
		}
		else if (jml == 2){
			//cout <<"masuk" << endl;
			cout << nilai << ";" << huruf[0] << huruf[1] << ";" << idx << endl;
		}*/
		cout << nilai << endl;
 	}
}

void randskhun(int n){
	int nilai;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= 20; j++){
			if ((j == 2) or (j == 5) or (j == 8) or (j == 11) or (j == 15) or (j == 19)){
				cout << '-';
			}
			else if (j == 1){
				nilai = rand() % 2 + 3;
				cout << nilai;
			}
			else if (j == 3){
				cout << 1;
			}
			else if (j == 4){
				nilai = rand() % 3 + 3;
				cout << nilai;
			}
			else{
				nilai = rand() % 10;
				cout << nilai;
			}
		}
		cout << endl;
	}
}

int main() {
	srand(time(NULL));
	//sks();
	nimmahasiswa_pt();

	//cellphonenumber(600);
	//homephonenumber(600);
	//randnumber(80, 1, 2, 4);


	/*int neffname;
	vector<string> frontn;
	vector<string> backn;

	frontn.push_back("alson");
	frontn.push_back("alvin");
	frontn.push_back("jovian");
	frontn.push_back("alif");

	backn.push_back("cahyadi");
	backn.push_back("junianto");
	backn.push_back("christianto");
	backn.push_back("baskoro");

	random_shuffle ()

	for(int i = 0; i < frontn.size(); i++) {
		for (int j = 0; j < backn.size(); j++) {
			cout << frontn[i] << " " << backn[j] << endl;
		}
	}*/
}