/* automatically generated by arduino-cmake */
#line 1 "/Users/danaklamut/ClionProjects/iondb/src/tests/behaviour/dictionary/open_address_hash/behaviour_open_address_hash.ino"
#include <Arduino.h>
#include <SPI.h>
#include <SD.h>
#include "test_behaviour_open_address_hash.h"

#line 8 "/Users/danaklamut/ClionProjects/iondb/cmake-build-debug/src/tests/behaviour/dictionary/open_address_hash/test_behaviour_open_address_hash_behaviour_open_address_hash.ino.cpp"
#include "Arduino.h"

/* === START Forward: /Users/danaklamut/ClionProjects/iondb/src/tests/behaviour/dictionary/open_address_hash/behaviour_open_address_hash.ino */
void
setup(
);

void
setup(
);

void
loop(
);

void
loop(
);

/* === END Forward: /Users/danaklamut/ClionProjects/iondb/src/tests/behaviour/dictionary/open_address_hash/behaviour_open_address_hash.ino */
#line 4 "/Users/danaklamut/ClionProjects/iondb/src/tests/behaviour/dictionary/open_address_hash/behaviour_open_address_hash.ino"

void
setup(
) {
	SPI.begin();
	SD.begin(SD_CS_PIN);
	Serial.begin(BAUD_RATE);
	runalltests_behaviour_open_address_hash();
}

void
loop(
) {}