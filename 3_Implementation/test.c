#include "unity.h"
#include "main.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_login()
{
    int d;
    int c=2;
    TEST_ASSERT_EQUAL(1,login(c));
    
}

int main()
{
  UNITY_BEGIN();
  
  RUN_TEST(test_login);
  return UNITY_END();
}
