#include <iostream>
#include <format>
#include "AirlineTicket.h"

using namespace std;

int main()
{
	AirlineTicket myTicket;  // Stack-based AirlineTicket
	myTicket.setPassengerName("Sherman T. Socketwrench");
	myTicket.setNumberOfMiles(700);
	myTicket.setFrequentFlyerNumber(123'456);
	double cost{ myTicket.calculatePriceInDollars() };
	cout << format("This ticket will cost ${}", cost) << endl;
	
	const auto frequentFlyerNumber{ myTicket.getFrequentFlyerNumber() };
	if (frequentFlyerNumber) {
		cout << format("Frequent flyer number: {}", frequentFlyerNumber.value()) << endl;
	} else {
		cout << "No frequent flyer number." << endl;
	}
} 
