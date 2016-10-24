#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

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

int main() {
	srand(time(NULL));
	sks();

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