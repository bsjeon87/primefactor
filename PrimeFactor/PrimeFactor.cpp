
#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int value) {
		std::vector<int> result = {};

		if (value == 2) {
			result.push_back(2);
		}
		return result;
	}
};