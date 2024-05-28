#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <functional>

typedef void (*PFunc)(int* sec, int lotteryNum, int userInput); //ポインター関数を宣言

/// <summary>
/// 結果を出力する関数
/// </summary>
/// <param name="sec">秒単位</param>
/// <param name="lotteryNum">乱数を対応する変数</param>
/// <param name="userInput">ユーザーから受ける変数</param>
void DispResult(int* sec, int lotteryNum, int userInput) {
	if (userInput % 2 == lotteryNum % 2) { //奇数と偶数異なりがあるか
		printf("%d秒待ってサイコロの結果は:　%d\n", *sec, lotteryNum);
		printf("当たり！！\n");
	}
	else {
		printf("%d秒待ってサイコロの結果は:　%d\n", *sec, lotteryNum);
		printf("ぶぶー\n");
	}
}

/// <summary>
/// 引数のint型を秒に変換する
/// </summary>
/// <param name="pause"></param>
/// <param name="second"></param>
/// <param name="lotteryNum"></param>
/// <param name="userInput"></param>
void setTimeout(PFunc pause, int second, int lotteryNum, int userInput) {
	Sleep(second * 1000);

	pause(&second, lotteryNum, userInput);
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
	//サイコロの結果
	int diceHandler = 0;

	auto rollDice = [](int i) -> int {return rand() % 6 + 1; };
	std::function<int(int)> diceResult = rollDice;

	int lotteryNum = diceResult(diceHandler);

	//ユーザーから入力を取得
	printf("'1'(奇数）か'２'(偶数)を入力してください: ");

	char userInput[100];
	bool result = false;

	//必ず一回も入力取得、入力がダメな限りwhile文から抜けられない
	do {
		fgets(userInput, sizeof(userInput), stdin);
		result = checkInput(userInput);

		if (!result) {
			printf("入力エラー。\nもう一度'1'(奇数）か'２'(偶数)を入力してください: ");
		}
	} while (!result);

	//入力したstring型をint型に変換
	int number = atoi(userInput);

	PFunc pause;
	pause = DispResult;
	setTimeout(pause, 3, lotteryNum, number);

	return 0;
}