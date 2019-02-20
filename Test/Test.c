#include "Test.h"
#include "unity.h"

#include "main.h"

void setUp(void)
{
  /* This is run before EACH TEST */
}

void tearDown(void)
{
}

void test_always_pass(void)
{
  /* All of these should pass */
  TEST_ASSERT_EQUAL_INT( 10, 10 );
}

void test_sum_function(void)
{
  TEST_ASSERT_EQUAL_INT( 10, sum(5,5) );
  TEST_ASSERT_EQUAL_INT( 20, sum(8,12) );
}


