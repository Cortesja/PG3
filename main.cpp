#include <stdio.h>
#include <string>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {

	//リストを宣言
#pragma region

	std::list<const char*> stationName = {
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno",
		"Uguisudani", "Nippori", "Tabata", "Komagoe", "Sugamo",
		"Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba",
		"Shin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya",
		"Ebisu", "Meguro", "Gotanda", "Osaki", "Shinagawa",
		"Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};
#pragma endregion 

	cout << "1970の山手線の駅" << endl;
	for (std::list<const char*>::iterator printList = stationName.begin(); printList != stationName.end(); printList++) {
		cout << *printList << endl;
	}


	cout << endl << "2019の山手線の駅" << endl;
	for (std::list<const char*>::iterator printList = stationName.begin(); printList != stationName.end(); printList++) {
		if (*printList == "Tabata") {
			printList = stationName.insert(printList, "Nishi-Nippori");
			cout << *printList << endl;
			++printList;
		}
		cout << *printList << endl;
	}

	cout << endl << "2022の山手線の駅" << endl;
	for (std::list<const char*>::iterator printList = stationName.begin(); printList != stationName.end(); printList++) {
		if (*printList == "Tamachi") {
			printList = stationName.insert(printList, "Takanawa Gateway");
			cout << *printList << endl;
			++printList;
		}
		cout << *printList << endl;
	}
}