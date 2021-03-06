#include <string>
#include <type_traits>
#include <array>
#include <vector>
#include "Mempool.h"
#include "gtest/gtest.h"

#include <memory_resource>

// A test runner.
// For actual tests, see Basics.cpp and Concurrency.cpp

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    system("pause");
    return res;
}
