#include "matrixh.hpp"
// converts a number to binary system
vector <int> erkuakan (int number) {
	int remainder=0;
	vector<int> residual;
	for (int i=0;number>=1;i++) {
		remainder=number%2;
		number /=2;
		residual.push_back(remainder);
	}
	residual.push_back(number);
	return residual;
}
