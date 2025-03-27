
#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int value) {
		std::vector<int> result = {};

		if (value > 1) {
			result.push_back(value);
		}
		return result;
	}
};