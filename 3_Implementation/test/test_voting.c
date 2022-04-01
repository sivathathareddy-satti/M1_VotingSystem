#include "unity.h"

#include "election.h"






/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}




/* Prototypes for all the test functions */


void test_voiting(void){
        
       
        TEST_ASSERT_EQUAL(NULL,main());
        
      
}




int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_voting);

return UNITY_END();
}
