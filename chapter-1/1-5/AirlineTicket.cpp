#include "AirlineTicket.h"

using namespace std;

//AirlineTicket::AirlineTicket()
//	: m_passengerName{ "Unknown Passenger" }
//	, m_numberOfMiles{ 0 }
//	, m_hasEliteSuperRewardsStatus{ false }
//{
//}
//
//AirlineTicket::~AirlineTicket()
//{
//	// Nothing to do in terms of cleanup
//}

const double AirlineTicket::calculatePriceInDollars() const
{
	if (getHasEliteSuperRewardsStatus()) {
		// Elite Super Rewards customers fly for free!
		return 0;
	}

	// The cost of the ticket is the number of miles times 0.1.
	// Real airlines probably have a more complicated formula!
	return getNumberOfMiles() * 0.1;
}

const string& AirlineTicket::getPassengerName() const
{
	return m_passengerName;
}

void AirlineTicket::setPassengerName(const string& name)
{
	m_passengerName = name;
}

const int AirlineTicket::getNumberOfMiles() const
{
	return m_numberOfMiles;
}

void AirlineTicket::setNumberOfMiles(const int miles)
{
	m_numberOfMiles = miles;
}

const bool AirlineTicket::getHasEliteSuperRewardsStatus() const
{
	return m_hasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(const bool status)
{
	m_hasEliteSuperRewardsStatus = status;
}
