#include "saclist.hpp"
#include <boost/test/unit_test.hpp>

using namespace boost::unit_test;

BOOST_AUTO_TEST_SUITE( saclist_insert_test_suite )

BOOST_AUTO_TEST_CASE( saclist_init )
{
	sac::list<int> l;
	BOOST_CHECK( l.get_size() == 0 );
}

BOOST_AUTO_TEST_SUITE_END()
