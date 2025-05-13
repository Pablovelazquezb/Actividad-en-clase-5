#include <gtest/gtest.h>
#include "mult.h"

TEST(SubTest, HandlesPositiveInput)
{
int multiplicacion = mult(5, 2);

EXPECT_EQ(multiplicacion, 10);
}
