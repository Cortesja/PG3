#include <stdio.h>
#include <iostream>
using namespace std;

template <typename Type>
class Compare {
public:
    Compare(Type v1, Type v2) : value1_(v1), value2_(v2) {} //コンストラクター

    Type getMinResult() { //minを出力関数
        if (value1_ > value2_) {
            return static_cast<Type> (value2_);
        }
        return static_cast<Type> (value1_);
    }
private:
    Type value1_;
    Type value2_;
};


int main() {
    Compare<int> compareInt(1, 2); //Type value1_とType value2_に1と2の値でインスタンスcompareIntを制作する
    Compare<float> compareFloat(24.5f, 1.0f);
    Compare<double> compareDouble(23.111, 1.0);

    Compare<int> compareIntDouble(14.555, 1);
    Compare<double> compareDoubleInt(1.000, 33.2233);
    Compare<float> compareFloatDouble(1.0f, 3444.4);

    //比べた後の結果を出力
    printf("%d\n", compareInt.getMinResult());
    printf("%0.2f\n", compareFloat.getMinResult());
    printf("%lf\n", compareDouble.getMinResult());

    printf("%d\n", compareIntDouble.getMinResult());
    printf("%lf\n", compareDoubleInt.getMinResult());
    printf("%0.2f\n", compareFloatDouble.getMinResult());
	return 0;
}