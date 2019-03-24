#include "Hand.h"
#include "DeckTests.h"
#include "TestHand.h"
int main(void)
{
	srand((unsigned)time(NULL));
	
	DeckTests t;
	//t.testConstructors();
	//t.testDeal();
	
	TestHand h;
	h.TestPropertiesEmpty();
	return 0;
}
