#include "addlogs.h"
#include "modifylogs.h"
#include "logdirectory.h"
#include "removelogs.h"
#include "makepayment.h"
#include "login.h"
#include "unity.h"

/* Modify these two lines according to the project */
#define PROJECT_NAME    "OTT_System"

/* Prototypes for all the test functions */
void test_addlogs(void);
void test_modifylogs(void);
void test_logdirectory(void);
void test_removelogs(void);
void test_makepayment(void);
void test_login(void);
void test_searchlogs(void);

/* Required by the unity test framework */
void setUp(){

}
/* Required by the unity test framework */
void tearDown(){

}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addlogs);
  RUN_TEST(test_modifylogs);
  RUN_TEST(test_logdirectory);
  RUN_TEST(test_removelogs);
  RUN_TEST(test_makepayment);
  RUN_TEST(test_login);
  RUN_TEST(test_searchlogs);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_addlogs(void) {
    TEST_ASSERT_EQUAL("Congratulations! We have updated our log directory with your log!", addlogs(123456789, Shivani_Khare, 1000));
}

void test_modifylogs(void) {
    TEST_ASSERT_EQUAL("Success", modifylogs(123456789, Rina, 2000));
  
}

void test_logdirectory(void) {
    TEST_ASSERT_EQUAL("Press Any Key To Go Back", logdirectory());
  
}

void test_removelogs(void) {
    TEST_ASSERT_EQUAL("Your record has been removed successfully. You will be missed!", divide(123456789));
  
}

void test_makepayment(void) {
    TEST_ASSERT_EQUAL("System Message: ~THANK YOU %s WE APPRECIATE YOUR TIMELY PAYMENTS~", makepayment(123456789, 2000));

}

void test_login(void) {
    TEST_ASSERT_EQUAL("CONGRATULATIONS ON SUCCESSFUL LOGIN !", login("ShivaniK", "123456789"));

}

void test_searchlogs(void) {
    TEST_ASSERT_EQUAL("Record Found", searchlogs(123456789));
}
