/**********************************************************
 * @file main.cpp
 * @brief main function for gtest
 * @author ngmrsng
 * @date 2016/07/11
 *********************************************************/

#include <config.h>

#ifdef ENABLE_GTEST
#include <gtest/gtest.h>
#endif

#ifdef ENABLE_GMOCK
#include <gmock/gmock.h>
#endif

/**
 * @fn
 * int main(int argc, char **argv)
 * @brief main function for gtest
 * @return result of test
 * @sa RUN_ALL_TESTS()
 * @detail 詳細な説明
 */
int main(int argc, char **argv)
{
	//! result of test
	int lResult = 0;

#ifdef ENABLE_GTEST
	::testing::InitGoogleTest(&argc, argv);
#endif

#ifdef ENABLE_GMOCK
	::testing::InitGoogleMock(&argc, argv);
#endif

#ifdef ENABLE_GTEST || ENABLE_GMOCK
	lResult =  RUN_ALL_TESTS();
#endif

	return lResult;
}
