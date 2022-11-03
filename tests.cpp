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

TEST_CASE("solve") {
	CHECK(solve("N urneg gung'f shyy hc yvxr n ynaqsvyy N wbo gung fybjyl xvyyf lbh Oehvfrf gung jba'g urny Lbh ybbx fb gverq, haunccl Oevat qbja gur tbireazrag Gurl qba'g, gurl qba'g fcrnx sbe hf V'yy gnxr n dhvrg yvsr N unaqfunxr bs pneoba zbabkvqr Ab nynezf naq ab fhecevfrf") == "A heart that's full up like a landfill A job that slowly kills you Bruises that won't heal You look so tired, unhappy Bring down the government They don't, they don't speak for us I'll take a quiet life A handshake of carbon monoxide No alarms and no surprises");

	CHECK(solve("Uhx mi nbcm cm Wblcmngum Uhx qbun bupy sio xihy? Uhinbyl syul ipyl Uhx u hyq ihy domn vyaoh Uhx mi nbcm cm Wblcmngum C bijy sio bux zoh Nby hyul uhx nby xyul ihym Nby ifx uhx nby sioha U pyls Gylls Wblcmngum Uhx u Bujjs Hyq Syul Fyn'm bijy cn'm u aiix ihy Qcnbion uhs zyul") == "And so this is Christmas And what have you done? Another year over And a new one just begun And so this is Christmas I hope you had fun The near and the dear ones The old and the young A very Merry Christmas And a Happy New Year Let's hope it's a good one Without any fear");

	CHECK(solve("Gr'q kyigle wms apw ctcpw rgkc Wms egtc wmsp jmtc rm kc rfgq uyw Qywgle wms'b uygr dmp kc rm qryw G ilmu gr fsprq wms Zsr G lccb rm rcjj wms qmkcrfgle Kw fcypr hsqr ayl'r zc dygrfdsj dmp jmle G qucyp G'jj mljw kyic wms apw") == "It's making you cry every time You give your love to me this way Saying you'd wait for me to stay I know it hurts you But I need to tell you something My heart just can't be faithful for long I swear I'll only make you cry");
}

