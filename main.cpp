#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <vector>
#include <cassert>
#include <string>
using namespace std;

int main() {

	ifstream inputFile;
	inputFile.open("PG3_03_02.txt"); //ファイル読み込む
	assert(inputFile.is_open());

	vector<string> file; //ファイルの情報を保留するための変数
	string line; //一行ごとに保留するための変数
	while (getline(inputFile, line, ',')) {
		file.push_back(line);//vector<string>型fileに最後尾にlineの中身を挿入
	}
	inputFile.close();//ファイルを閉じる

	sort(file.begin(), file.end());//順番に並べる

	for (const auto& str : file) {//ファイル行がある限り回す
		cout << str << endl;
	}
	return 0;
}