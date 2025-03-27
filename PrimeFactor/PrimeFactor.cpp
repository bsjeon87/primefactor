
#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int value) {
		std::vector<int> result = {};

		if (value == 2) {
			result.push_back(2);
		}
		else if (value == 3) {
			result.push_back(3);
		}
		return result;
	}
};