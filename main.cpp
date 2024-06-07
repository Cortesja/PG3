#include <stdio.h>
#include <iostream>
using namespace std;

template <typename Type>
class Compare {
public:
    Compare(Type v1, Type v2) : value1_(v1), value2_(v2) {}

    Type getValue1() {
        return value1_;
    }
    Type getValue2() {
        return value2_;
    }

    void printMinResult() {
        Type result;
        if (value1_ > value2_) {
            result = static_cast<Type> (value2_);
        }
        else {
            result = static_cast<Type> (value1_);
        }
        cout << result << endl;
    }

private:
    Type value1_;
    Type value2_;
};


int main() {
    Compare<int> compareInt(1, 2);
    Compare<float> compareFloat(24.5f, 1);
    Compare<double> compareDouble(23.111, 1.0);

    Compare<int> compareIntDouble(14.555, 1);
    Compare<double> compareDoubleInt(1.11, 33);
    Compare<float> compareFloatDouble(23.0f, 3444.4);

    compareInt.printMinResult();
    compareFloat.printMinResult();
    compareDouble.printMinResult();

    compareIntDouble.printMinResult();
    compareDoubleInt.printMinResult();
    compareFloatDouble.printMinResult();
	return 0;
}