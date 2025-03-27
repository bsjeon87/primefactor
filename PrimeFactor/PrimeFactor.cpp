
#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int value) {
		std::vector<int> result = {};

		for (int divisor = 2; value > 1; divisor++) {
			while (value % divisor == 0) {
				result.push_back(divisor);
				value /= divisor;
			}
		}
		
		return result;
	}
};