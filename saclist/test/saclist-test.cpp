#include "saclist.hpp"
#include <boost/test/unit_test.hpp>
#include <numeric>
using namespace boost::unit_test;

BOOST_AUTO_TEST_SUITE( saclist_test_suite )

BOOST_AUTO_TEST_CASE( saclist_init )
{
	sac::list<int> l;
	BOOST_CHECK( l.get_size() == 0 );
}


BOOST_AUTO_TEST_CASE( saclist_insert )
{
	// Input and Out puts
	const size_t In  = 10;

	// Input sets
	std::vector<int>  v(In);
	std::iota( v.begin(), v.end(), 0); // Magic ;-)

	// Start Testing
	sac::list<int> l;
	std::for_each( v.begin(), v.end(), [&] ( auto &x ) { l.insert(x); } );
	l.display(); // Yuck
	
	// Validate
	BOOST_CHECK( l.get_size() == In );
}


BOOST_AUTO_TEST_CASE( saclist_remove )
{
	// Input and Out puts
	const size_t In  = 10;
	const size_t Out = 0;

	// Input sets
	std::vector<int>  v(In);
	std::iota( v.begin(), v.end(), 0); 

	// Test
	sac::list<int> l;
	std::for_each( v.begin(), v.end(), [&] ( auto &x ) { l.insert(x); } );
	l.display(); // Yuck
	std::for_each( v.begin(), v.end(), [&] ( auto &x ) { l.remove(x); } );

	// Validate
	BOOST_CHECK( l.get_size() == Out );

}


BOOST_AUTO_TEST_SUITE_END()
