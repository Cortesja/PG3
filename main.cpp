#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef void (*PFunc)(int*, int lotteryNum, int userInput); //ポインター関数を宣言

/// <summary>
/// 結果を出力する関数
/// </summary>
/// <param name="s">秒単位</param>
/// <param name="lotteryNum">乱数を対応する変数</param>
/// <param name="userInput">ユーザーから受ける変数</param>
void DispResult(int* s, int lotteryNum, int userInput) {
	if (userInput % 2 == lotteryNum % 2) { //奇数と偶数異なりがあるか
		printf("%d秒待ってサイコロの結果は:　%d\n", *s, lotteryNum);
		printf("当たり！！\n");
	}
	else {
		printf("%d秒待ってサイコロの結果は:　%d\n", *s, lotteryNum);
		printf("ぶぶー\n");
	}
}

/// <summary>
/// 引数のint型を秒に変換する
/// </summary>
/// <param name="p"></param>
/// <param name="second"></param>
/// <param name="lotteryNum"></param>
/// <param name="userInput"></param>
void setTimeout(PFunc p, int second, int lotteryNum, int userInput) {
	Sleep(second * 1000);

	p(&second, lotteryNum, userInput);
}

/// <summary>
/// 入力は数字なのかを確認、float型であれば切り捨てで処理を行われる
/// </summary>
/// <param name="userInput"></param>
/// <returns></returns>
bool checkInput(char userInput[]) {

	int number = atoi(userInput);
	if (number <= 0 || number > 2) { return false; }

	if (number == 1 || number == 2) { return true; }

	return false;
}

int main() {

	srand((unsigned int)time(NULL));

	int lotteryNum = rand() % 6 + 1;

	printf("'1'(奇数）か'２'(偶数)を入力してください: ");

	char userInput[100];
	fgets(userInput, sizeof(userInput), stdin);
	bool result = checkInput(userInput);

	while (!result) {
		printf("入力エラー。\nもう一度整数を入力してください: ");
		fgets(userInput, sizeof(userInput), stdin);
		result = checkInput(userInput);
	}

	//入力したstring型をint型に変換
	int number = atoi(userInput);

	PFunc pause;
	pause = DispResult;
	setTimeout(pause, 3, lotteryNum, number);

	return 0;
}