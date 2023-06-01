#include "pch.h"
#include "../CRA_TDD_KATA_PrimeFactor/primeFactor.cpp"
#include <vector>
using namespace std;

class PrimeFixture : public testing::Test
{
public :
	PrimeFactor prime_factor;
	vector<int> expected;
};
TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	PrimeFactor prime_factor;
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, Of3) {
	PrimeFactor prime_factor;
	expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, Of4) {
	PrimeFactor prime_factor;
	expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, Of6) {
	PrimeFactor prime_factor;
	expected = { 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFixture, Of9) {
	PrimeFactor prime_factor;
	expected = { 3, 3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}