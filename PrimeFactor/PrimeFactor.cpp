
#include <vector>

class PrimeFactor {
public:
	std::vector<int> of(int value) {
		std::vector<int> result = {};

		if (value > 1) {
			if (value == 4) {
				result.push_back(2);
				result.push_back(2);
			}
			else {
				result.push_back(value);
			}
		}
		return result;
	}
};