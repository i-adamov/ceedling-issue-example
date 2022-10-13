#include "unity.h"

#include "mock_drv_aaa.h"
#include "other_header.h"

#include "example_file.h"
#include "example_file.c"

/* setup and teardown functions called before and after each test function */
void setUp(void)
{

}

void tearDown(void)
{
}


void test_func1(void)
{
    int a = 10;
    int x = 5;
    
    int expected = a + x * x + x + SOMETHING;
    
    get_aaa_ExpectAndReturn(a);

    int result = func1(x);
    TEST_ASSERT_EQUAL_INT(expected, result);
}

void test_static_func2(void)
{
    int x = 8;

    int result = static_func2(x);
    TEST_ASSERT_EQUAL_INT(64, result);
}
