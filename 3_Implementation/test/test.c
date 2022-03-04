#include "unity.h"
#include "phonebbok.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_name()
{
    int d;
    int c=2;
    TEST_ASSERT_EQUAL(1,name(c));
    
}

int main()
{
  UNITY_BEGIN();
  
  RUN_TEST(test_name);
  return UNITY_END();
}
