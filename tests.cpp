#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "solve.h"

TEST_CASE("shift character"){
	CHECK(shiftChar('a', 1) ==  'b');
	CHECK(shiftChar('A', 15) ==  'P');
	CHECK(shiftChar('z', 11) ==  'k');
	CHECK(shiftChar('Q', 8) ==  'Y');
}

TEST_CASE("caesar"){
	CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
	CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
	CHECK(encryptCaesar("abcdefghijklmnopqrstuvwxyz", 18) == "stuvwxyzabcdefghijklmnopqr");
	CHECK(encryptCaesar("Sometimes all I think about is you", 13) == "Fbzrgvzrf nyy V guvax nobhg vf lbh");
}

TEST_CASE("capital") {
	CHECK(capital('C') == 'c' );
	CHECK(capital('a') == 'a' );
}

