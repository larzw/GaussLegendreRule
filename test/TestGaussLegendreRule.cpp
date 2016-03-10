#define BOOST_TEST_MODULE TestGaussLegendreRule
#include <boost/test/unit_test.hpp>
#include "GaussLegendreRule.hpp"

BOOST_AUTO_TEST_CASE(getOrder)
{
    GaussLegendreRule gaussLegendre(5, 0, 2);
    BOOST_CHECK(gaussLegendre.getOrder() == 5);
}

BOOST_AUTO_TEST_CASE(getLowerBound)
{
    GaussLegendreRule gaussLegendre(5, 0, 2);
    BOOST_CHECK(gaussLegendre.getLowerBound() == 0);
}

