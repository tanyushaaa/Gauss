#include "interface.h"

int main() {
	try{
		interface();
	} catch (std::runtime_error& re) {
		std::cerr << re.what();
	}

	return 0;
}
