#include "pch.h"
#include "../CRA_TDD_KATA_PrimeFactor/primeFactor.cpp"
#include <vector>
using namespace std;

TEST(TestCaseName, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}