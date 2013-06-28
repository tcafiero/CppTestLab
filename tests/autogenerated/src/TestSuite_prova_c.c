#include "cpptest.h"

CPPTEST_CONTEXT("/C++TestLab/src/prova.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/C++TestLab/src/prova.c");

CPPTEST_TEST_SUITE(TestSuite_prova_c_90fcb814);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum_1);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum_10);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum_2);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum_3);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum_4);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum_5);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum_6);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum_7);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum_8);
        CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum_9);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sum);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sub_1);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sub_10);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sub_2);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sub_3);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sub_4);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sub_5);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sub_6);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sub_7);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sub_8);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_sub_9);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_mul_1);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_mul_10);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_mul_2);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_mul_3);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_mul_4);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_mul_5);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_mul_6);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_mul_7);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_mul_8);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_mul_9);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_generic_1);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_generic);
CPPTEST_TEST(TestSuite_prova_c_90fcb814_test_generic_0);
CPPTEST_TEST_SUITE_END();
        
void TestSuite_prova_c_90fcb814_test_sum_1(void);
void TestSuite_prova_c_90fcb814_test_sum_10(void);
void TestSuite_prova_c_90fcb814_test_sum_2(void);
void TestSuite_prova_c_90fcb814_test_sum_3(void);
void TestSuite_prova_c_90fcb814_test_sum_4(void);
void TestSuite_prova_c_90fcb814_test_sum_5(void);
void TestSuite_prova_c_90fcb814_test_sum_6(void);
void TestSuite_prova_c_90fcb814_test_sum_7(void);
void TestSuite_prova_c_90fcb814_test_sum_8(void);
void TestSuite_prova_c_90fcb814_test_sum_9(void);

void TestSuite_prova_c_90fcb814_test_sum(void);
void TestSuite_prova_c_90fcb814_test_sub_1(void);
void TestSuite_prova_c_90fcb814_test_sub_10(void);
void TestSuite_prova_c_90fcb814_test_sub_2(void);
void TestSuite_prova_c_90fcb814_test_sub_3(void);
void TestSuite_prova_c_90fcb814_test_sub_4(void);
void TestSuite_prova_c_90fcb814_test_sub_5(void);
void TestSuite_prova_c_90fcb814_test_sub_6(void);
void TestSuite_prova_c_90fcb814_test_sub_7(void);
void TestSuite_prova_c_90fcb814_test_sub_8(void);
void TestSuite_prova_c_90fcb814_test_sub_9(void);
void TestSuite_prova_c_90fcb814_test_mul_1(void);
void TestSuite_prova_c_90fcb814_test_mul_10(void);
void TestSuite_prova_c_90fcb814_test_mul_2(void);
void TestSuite_prova_c_90fcb814_test_mul_3(void);
void TestSuite_prova_c_90fcb814_test_mul_4(void);
void TestSuite_prova_c_90fcb814_test_mul_5(void);
void TestSuite_prova_c_90fcb814_test_mul_6(void);
void TestSuite_prova_c_90fcb814_test_mul_7(void);
void TestSuite_prova_c_90fcb814_test_mul_8(void);
void TestSuite_prova_c_90fcb814_test_mul_9(void);
void TestSuite_prova_c_90fcb814_test_generic_1(void);
void TestSuite_prova_c_90fcb814_test_generic(void);
void TestSuite_prova_c_90fcb814_test_generic_0(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_prova_c_90fcb814);

void TestSuite_prova_c_90fcb814_setUp(void)
{
}

void TestSuite_prova_c_90fcb814_tearDown(void)
{
}


/* CPPTEST_TEST_CASE_BEGIN test_sum_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum_1()
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
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sum_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sum_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = -1;
    /* Initializing argument 2 (b) */ 
    int _b  = 0;
    {
        /* Tested function call */
        int _return  = sum(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sum_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sum_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum_2()
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
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sum_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sum_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = 1;
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = sum(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sum_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sum_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = sum(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sum_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sum_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = -1;
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = sum(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sum_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sum_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (b) */ 
    int _b  = -1;
    {
        /* Tested function call */
        int _return  = sum(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sum_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sum_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = 1;
    /* Initializing argument 2 (b) */ 
    int _b  = -1;
    {
        /* Tested function call */
        int _return  = sum(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sum_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sum_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (b) */ 
    int _b  = 1;
    {
        /* Tested function call */
        int _return  = sum(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sum_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sum_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = 0;
    /* Initializing argument 2 (b) */ 
    int _b  = 1;
    {
        /* Tested function call */
        int _return  = sum(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sum_9 */

/* CPPTEST_TEST_CASE_BEGIN test_sum */
/* CPPTEST_TEST_CASE_CONTEXT int sum(int, int) */
void TestSuite_prova_c_90fcb814_test_sum()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = 4;
    /* Initializing argument 2 (b) */ 
    int _b  = 3;
    {
        /* Tested function call */
        int _return  = sum(_a, _b);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(7, ( _return ) );
    }
}
/* CPPTEST_TEST_CASE_END test_sum */

/* CPPTEST_TEST_CASE_BEGIN test_sub_1 */
/* CPPTEST_TEST_CASE_CONTEXT int sub(int, int) */
void TestSuite_prova_c_90fcb814_test_sub_1()
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
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sub_1 */

/* CPPTEST_TEST_CASE_BEGIN test_sub_10 */
/* CPPTEST_TEST_CASE_CONTEXT int sub(int, int) */
void TestSuite_prova_c_90fcb814_test_sub_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = -1;
    /* Initializing argument 2 (b) */ 
    int _b  = 0;
    {
        /* Tested function call */
        int _return  = sub(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sub_10 */

/* CPPTEST_TEST_CASE_BEGIN test_sub_2 */
/* CPPTEST_TEST_CASE_CONTEXT int sub(int, int) */
void TestSuite_prova_c_90fcb814_test_sub_2()
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
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sub_2 */

/* CPPTEST_TEST_CASE_BEGIN test_sub_3 */
/* CPPTEST_TEST_CASE_CONTEXT int sub(int, int) */
void TestSuite_prova_c_90fcb814_test_sub_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = 1;
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = sub(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sub_3 */

/* CPPTEST_TEST_CASE_BEGIN test_sub_4 */
/* CPPTEST_TEST_CASE_CONTEXT int sub(int, int) */
void TestSuite_prova_c_90fcb814_test_sub_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = sub(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sub_4 */

/* CPPTEST_TEST_CASE_BEGIN test_sub_5 */
/* CPPTEST_TEST_CASE_CONTEXT int sub(int, int) */
void TestSuite_prova_c_90fcb814_test_sub_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = -1;
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = sub(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sub_5 */

/* CPPTEST_TEST_CASE_BEGIN test_sub_6 */
/* CPPTEST_TEST_CASE_CONTEXT int sub(int, int) */
void TestSuite_prova_c_90fcb814_test_sub_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (b) */ 
    int _b  = -1;
    {
        /* Tested function call */
        int _return  = sub(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sub_6 */

/* CPPTEST_TEST_CASE_BEGIN test_sub_7 */
/* CPPTEST_TEST_CASE_CONTEXT int sub(int, int) */
void TestSuite_prova_c_90fcb814_test_sub_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = 1;
    /* Initializing argument 2 (b) */ 
    int _b  = -1;
    {
        /* Tested function call */
        int _return  = sub(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sub_7 */

/* CPPTEST_TEST_CASE_BEGIN test_sub_8 */
/* CPPTEST_TEST_CASE_CONTEXT int sub(int, int) */
void TestSuite_prova_c_90fcb814_test_sub_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (b) */ 
    int _b  = 1;
    {
        /* Tested function call */
        int _return  = sub(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sub_8 */

/* CPPTEST_TEST_CASE_BEGIN test_sub_9 */
/* CPPTEST_TEST_CASE_CONTEXT int sub(int, int) */
void TestSuite_prova_c_90fcb814_test_sub_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = 0;
    /* Initializing argument 2 (b) */ 
    int _b  = 1;
    {
        /* Tested function call */
        int _return  = sub(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_sub_9 */

/* CPPTEST_TEST_CASE_BEGIN test_mul_1 */
/* CPPTEST_TEST_CASE_CONTEXT int mul(int, int) */
void TestSuite_prova_c_90fcb814_test_mul_1()
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
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_mul_1 */

/* CPPTEST_TEST_CASE_BEGIN test_mul_10 */
/* CPPTEST_TEST_CASE_CONTEXT int mul(int, int) */
void TestSuite_prova_c_90fcb814_test_mul_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = -1;
    /* Initializing argument 2 (b) */ 
    int _b  = 0;
    {
        /* Tested function call */
        int _return  = mul(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_mul_10 */

/* CPPTEST_TEST_CASE_BEGIN test_mul_2 */
/* CPPTEST_TEST_CASE_CONTEXT int mul(int, int) */
void TestSuite_prova_c_90fcb814_test_mul_2()
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
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_mul_2 */

/* CPPTEST_TEST_CASE_BEGIN test_mul_3 */
/* CPPTEST_TEST_CASE_CONTEXT int mul(int, int) */
void TestSuite_prova_c_90fcb814_test_mul_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = 1;
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMaxInt();
    {
        /* Tested function call */
        int _return  = mul(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_mul_3 */

/* CPPTEST_TEST_CASE_BEGIN test_mul_4 */
/* CPPTEST_TEST_CASE_CONTEXT int mul(int, int) */
void TestSuite_prova_c_90fcb814_test_mul_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = mul(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_mul_4 */

/* CPPTEST_TEST_CASE_BEGIN test_mul_5 */
/* CPPTEST_TEST_CASE_CONTEXT int mul(int, int) */
void TestSuite_prova_c_90fcb814_test_mul_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = -1;
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMinInt();
    {
        /* Tested function call */
        int _return  = mul(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_mul_5 */

/* CPPTEST_TEST_CASE_BEGIN test_mul_6 */
/* CPPTEST_TEST_CASE_CONTEXT int mul(int, int) */
void TestSuite_prova_c_90fcb814_test_mul_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (b) */ 
    int _b  = -1;
    {
        /* Tested function call */
        int _return  = mul(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_mul_6 */

/* CPPTEST_TEST_CASE_BEGIN test_mul_7 */
/* CPPTEST_TEST_CASE_CONTEXT int mul(int, int) */
void TestSuite_prova_c_90fcb814_test_mul_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = 1;
    /* Initializing argument 2 (b) */ 
    int _b  = -1;
    {
        /* Tested function call */
        int _return  = mul(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_mul_7 */

/* CPPTEST_TEST_CASE_BEGIN test_mul_8 */
/* CPPTEST_TEST_CASE_CONTEXT int mul(int, int) */
void TestSuite_prova_c_90fcb814_test_mul_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (b) */ 
    int _b  = 1;
    {
        /* Tested function call */
        int _return  = mul(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_mul_8 */

/* CPPTEST_TEST_CASE_BEGIN test_mul_9 */
/* CPPTEST_TEST_CASE_CONTEXT int mul(int, int) */
void TestSuite_prova_c_90fcb814_test_mul_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = 0;
    /* Initializing argument 2 (b) */ 
    int _b  = 1;
    {
        /* Tested function call */
        int _return  = mul(_a, _b);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_mul_9 */


/* CPPTEST_TEST_CASE_BEGIN test_generic */
/* CPPTEST_TEST_CASE_CONTEXT int generic(int, int, int) */
void TestSuite_prova_c_90fcb814_test_generic()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (op) */ 
    int _op  = 1;
    /* Initializing argument 2 (a) */ 
    int _a  = 4;
    /* Initializing argument 3 (b) */ 
    int _b  = 3;
    {
        /* Tested function call */
        int _return  = generic(_op, _a, _b);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(7, ( _return ) );
    }
}
/* CPPTEST_TEST_CASE_END test_generic */

/* CPPTEST_TEST_CASE_BEGIN test_generic_0 */
/* CPPTEST_TEST_CASE_CONTEXT int generic(int, int, int) */
void TestSuite_prova_c_90fcb814_test_generic_0()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (op) */ 
    int _op  = 2;
    /* Initializing argument 2 (a) */ 
    int _a  = 4;
    /* Initializing argument 3 (b) */ 
    int _b  = 3;
    {
        /* Tested function call */
        int _return  = generic(_op, _a, _b);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(1, ( _return ) );
    }
}
/* CPPTEST_TEST_CASE_END test_generic_0 */

/* CPPTEST_TEST_CASE_BEGIN test_generic_1 */
/* CPPTEST_TEST_CASE_CONTEXT int generic(int, int, int) */
void TestSuite_prova_c_90fcb814_test_generic_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (op) */
    int _op  = 3;
    /* Initializing argument 2 (a) */
    int _a  = 4;
    /* Initializing argument 3 (b) */
    int _b  = 3;
    {
        /* Tested function call */
        int _return  = generic(_op, _a, _b);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(12, ( _return ) );
    }
}
/* CPPTEST_TEST_CASE_END test_generic_1 */

