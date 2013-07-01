#include "cpptest.h"

CPPTEST_CONTEXT("/C++TestLab/src/prova.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/C++TestLab/src/prova.c");

CPPTEST_TEST_SUITE(TestSuite_prova_c_90fcb814);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_generic_2);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_generic_3);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_mul_11);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_mul_12);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sub_11);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sub_12);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum_11);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum_12);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_prova_c_90fcb814_test_generic_2(void);
void TestSuite_prova_c_90fcb814_test_generic_3(void);
void TestSuite_prova_c_90fcb814_test_mul_11(void);
void TestSuite_prova_c_90fcb814_test_mul_12(void);
void TestSuite_prova_c_90fcb814_test_sub_11(void);
void TestSuite_prova_c_90fcb814_test_sub_12(void);
void TestSuite_prova_c_90fcb814_test_sum_11(void);
void TestSuite_prova_c_90fcb814_test_sum_12(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_prova_c_90fcb814);

void TestSuite_prova_c_90fcb814_setUp(void)
{
}

void TestSuite_prova_c_90fcb814_tearDown(void)
{
}


/* CPPTEST_TEST_CASE_BEGIN test_generic_2 */
/* CPPTEST_TEST_CASE_CONTEXT int generic(int, int, int) */
void TestSuite_prova_c_90fcb814_test_generic_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (op) */ 
    int _op  = 4;
    /* Initializing argument 2 (a) */ 
    int _a  = 4;
    /* Initializing argument 3 (b) */ 
    int _b  = 4;
    {
        /* Tested function call */
        int _return  = generic(_op, _a, _b);
        /* Post-condition check */
    CPPTEST_ASSERT_INTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_generic_2 */

/* CPPTEST_TEST_CASE_BEGIN test_generic_3 */
/* CPPTEST_TEST_CASE_CONTEXT int generic(int, int, int) */
void TestSuite_prova_c_90fcb814_test_generic_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (op) */ 
    int _op  = 3;
    /* Initializing argument 2 (a) */ 
    int _a  = 4;
    /* Initializing argument 3 (b) */ 
    int _b  = 4;
    {
        /* Tested function call */
        int _return  = generic(_op, _a, _b);
        /* Post-condition check */
    CPPTEST_ASSERT_INTEGER_EQUAL(16, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_generic_3 */

/* CPPTEST_TEST_CASE_BEGIN test_mul_11 */
/* CPPTEST_TEST_CASE_CONTEXT int mul(int, int) */
void TestSuite_prova_c_90fcb814_test_mul_11()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = mul(_a, _b);
        /* Post-condition check */
    CPPTEST_ASSERT_INTEGER_EQUAL(1, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_mul_11 */

/* CPPTEST_TEST_CASE_BEGIN test_mul_12 */
/* CPPTEST_TEST_CASE_CONTEXT int mul(int, int) */
void TestSuite_prova_c_90fcb814_test_mul_12()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = mul(_a, _b);
        /* Post-condition check */
    CPPTEST_ASSERT_INTEGER_EQUAL(-2147483648, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_mul_12 */

/* CPPTEST_TEST_CASE_BEGIN test_sub_11 */
/* CPPTEST_TEST_CASE_CONTEXT int sub(int, int) */
void TestSuite_prova_c_90fcb814_test_sub_11()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = sub(_a, _b);
        /* Post-condition check */
    CPPTEST_ASSERT_INTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sub_11 */

/* CPPTEST_TEST_CASE_BEGIN test_sub_12 */
/* CPPTEST_TEST_CASE_CONTEXT int sub(int, int) */
void TestSuite_prova_c_90fcb814_test_sub_12()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = sub(_a, _b);
        /* Post-condition check */
    CPPTEST_ASSERT_INTEGER_EQUAL(1, ( _return ));
        CPPTEST_ASSERT_INTEGER_EQUAL((_a-_b),( _return ))
    }
}
/* CPPTEST_TEST_CASE_END test_sub_12 */

/* CPPTEST_TEST_CASE_BEGIN test_sum_11 */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum_11()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = sum(_a, _b);
        /* Post-condition check */
    CPPTEST_ASSERT_INTEGER_EQUAL(-2, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sum_11 */

/* CPPTEST_TEST_CASE_BEGIN test_sum_12 */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum_12()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = sum(_a, _b);
        /* Post-condition check */
    CPPTEST_ASSERT_INTEGER_EQUAL(-1, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sum_12 */
