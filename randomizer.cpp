#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void out (string s) {
	cout << s << endl;
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

void randnumber (int n, int size) {
	for (int mhs = 1; mhs <= n; mhs++) {
		for (int i = 1; i <= size; i++) {
			cout << rand() % 10;
		}
		cout << endl;
	}
}

int main() {
	//cellphonenumber(600);
	//homephonenumber(600);
	randnumber(600,15);

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