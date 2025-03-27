
#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int value) {
		std::vector<int> result = {};

		if (value > 1) {
			int divisor = 2;
			if (value == 4) {
				while (value % divisor == 0) {
					result.push_back(divisor);
					value /= divisor;
				}
			}
			else if (value == 6) {
				for (divisor = 2; value > 1; divisor++) {
					while (value % divisor == 0) {
						result.push_back(divisor);
						value /= divisor;
					}
				}
			}
			else {
				result.push_back(value);
			}
		}
		return result;
	}
};