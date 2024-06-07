#include <stdio.h>
#include <iostream>
using namespace std;

template <typename Type1, typename Type2>
class Compare {
public:
    Compare(Type1 v1, Type2 v2) : value1_(v1), value2_(v2) {} //コンストラクター

    Type1 getMinResult() { //minを出力関数
        if (value1_ > value2_) {
            return static_cast<Type1> (value2_);
        }
        return static_cast<Type1> (value1_);
    }
private:
    Type1 value1_;
    Type2 value2_;
};


int main() {
    Compare<int, int> compareInt(1, 2); //Type value1_とType value2_に1と2の値でインスタンスcompareIntを制作する
    Compare<float, float> compareFloat(24.5f, 1.0f);
    Compare<double, double> compareDouble(23.111, 1.0);

    Compare<double, int> compareIntDouble(14.555, 1);
    Compare<double, int> compareDoubleInt(1, 33.2233);
    Compare<float, double> compareFloatDouble(1.0f, 3444.4);

    //比べた後の結果を出力
    cout << compareInt.getMinResult() << endl;
    cout << compareFloat.getMinResult() << endl;
    cout << compareDouble.getMinResult() << endl;

    cout << compareIntDouble.getMinResult() << endl;
    cout << compareDoubleInt.getMinResult() << endl;
    cout << compareFloatDouble.getMinResult() << endl;
	return 0;
}