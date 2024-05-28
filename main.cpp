#include <stdio.h>

template <typename Type1>
Type1 min(Type1 a, Type1 b) {
	if (a > b) { //もしbよりaのほうが大きいならbを戻り値として返す。
		return static_cast<Type1> (b);
	}
	return static_cast<Type1> (a);//bの方が大きいならaを返す。
}

int main() {
	printf("%d\n", min<int>(2, 3));//引数はint型の場合
	printf("%f\n", min<float>(10.0f, 5.0f));//引数はfloat型の場合
	printf("%lf\n", min<double>(10.3400, 12.245));//引数はdouble型場合
	return 0;
}
