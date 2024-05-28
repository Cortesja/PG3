#include <stdio.h>

int SpecialSalaryCalc(int hours, int base) {
	int base_ = 100;	//1時間の時給				
	if (hours > 1) {	//働く時間が1より大きいであれば						
		base = base * 2 - 50;	//働けば働くほど時給が変更方式
		return base + SpecialSalaryCalc((hours - 1), base);	//前の時間でもらって時給がアップする
	}
	else {
		return base_;	//働く時間は1時間以下ならbase_を返す。					
	}
}

int main() {
	int hours = 7;	//時間
	int base = 100;	//base再帰敵な賃金
	int salary = 1072;	//一般敵の時給
	int result = SpecialSalaryCalc(hours, base);


	//一般的な賃金と再帰的な賃金を比べする処理
	printf("再帰的な賃金: %d\n", result);
	printf("一般的な賃金: %d\n", salary * hours);
	if (result > salary * hours) {
		printf("\n再帰的な賃金の方がお得です。\n");
	}
	else {
		printf("\n一般的な賃金の方がお得です。\n");
	}
	return 0;
}