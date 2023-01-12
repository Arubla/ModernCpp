#include <iostream>
namespace Avg {
	float Calculate(float x, float y) {
		return (x + y) / 2;
	}
}
//even though the two identical functions have different behavior,
//they can both be called through their respective namespaces
namespace Basic {
	float Calculate(float x, float y) {
		return x + y;
	}
}

//namespaces are kind of like Java interfaces
//where the methods are implemented
//can have nested namespaces

int main() {
	using namespace Avg;
	Calculate(2.6f, 6.1f);

	Basic::Calculate(2.6f, 6.1f);



	return 0;
}