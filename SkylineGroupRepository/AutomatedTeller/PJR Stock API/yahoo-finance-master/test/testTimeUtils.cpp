#define BOOST_TEST_MODULE TimeUtilsTest
#include <boost/test/unit_test.hpp>

#include "time_utils.hpp"

BOOST_AUTO_TEST_CASE(TestDateToEpoch) {
    BOOST_CHECK_EQUAL(1428451200, dateToEpoch("2015-04-08"));
    BOOST_CHECK_EQUAL(1441929600, dateToEpoch("2015-09-11"));
    BOOST_CHECK_EQUAL(1468627200, dateToEpoch("2016-07-16"));
    BOOST_CHECK_EQUAL(1483142400, dateToEpoch("2016-12-31"));
    BOOST_CHECK_EQUAL(1520380800, dateToEpoch("2018-03-07"));
    BOOST_CHECK_EQUAL(1681516800, dateToEpoch("2023-04-15"));
}

BOOST_AUTO_TEST_CASE(TestEpochToDate) {
    BOOST_CHECK_EQUAL("2015-04-15", epochToDate(1429056000));
    BOOST_CHECK_EQUAL("2016-02-29", epochToDate(1456704000));
    BOOST_CHECK_EQUAL("2017-01-01", epochToDate(1483228800));
    BOOST_CHECK_EQUAL("2017-03-03", epochToDate(1488499200));
    BOOST_CHECK_EQUAL("2017-06-21", epochToDate(1498003200));
    BOOST_CHECK_EQUAL("2022-11-07", epochToDate(1667779200));
}